/*A new deadly virus has infected large population of a planet. A brilliant scientist has discovered
a new strain of virus which can cure this disease. Vaccine produced from this virus has various
strength depending on midichlorians count. A person is cured only if midichlorians count in
vaccine batch is more than midichlorians count of person. A doctor receives a new set of report
which contains midichlorians count of each infected patient, Practo stores all vaccine doctor
has and their midichlorians count. You need to determine if doctor can save all patients with
the vaccines he has. The number of vaccines and patients are equal.

Input Format
First line contains the number of vaccines - N. Second line contains N integers, which are
strength of vaccines. Third line contains N integers, which are midichlorians count of patients.

Output Format
Print a single line containing 'Yes' or 'No'.*/

#include <stdio.h>
int main()
{
	int n, i, j, temp, flag = 0;
	int vaccine[10000];
	int patient[10000];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &vaccine[i]);
	for(i = 0; i < n; i++)
		scanf("%d", &patient[i]);
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(vaccine[j] > vaccine[j + 1])
			{
				temp = vaccine[j];
				vaccine[j] = vaccine[j + 1];
				vaccine[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if (patient[j] > patient[j + 1])
			{
				temp = patient[j];
				patient[j] = patient[j + 1];
				patient[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if (vaccine[i] <= patient[i])
		{ // if at least one patient can't be rescued, print No
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}