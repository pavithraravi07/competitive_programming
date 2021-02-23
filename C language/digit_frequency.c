/*Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given
string.

Input Format
The first line contains a string, num which is the given number.

Constraints
1 ≤ len(num) ≤ 1000
All the elements of num are made of English alphabets and digits.

Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit from 0
to 9.*/

#include <stdio.h>
int main()
{
	char s[1024];
	int i,j,arr[10]={0,0,0};
	scanf("%s", s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			j=s[i]-'0';
			arr[j]++;
		}
	}
	for(i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	return 0;
}
