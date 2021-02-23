/*Coders here is a simple task for you, you have given an array of size N and an integer M.
Your task is to calculate the difference between maximum sum and minimum sum of N-M
elements of the given array.

Constraints:
1<=t<=10
1<=n<=1000
1<=a[i]<=1000

Input:
First line contains an integer T denoting the number of testcases.
First line of every testcase contains two integer N and M.
Next line contains N space separated integers denoting the elements of array

Output:
For every test case print your answer in new line*/

#include <stdio.h>
int main()
{
	int t, n, k, arr[1000], i, j, temp, sum;
	scanf("%d", &t);
	while(t-- > 0)
	{
		scanf("%d %d", &n, &k);
		sum = 0;
		for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		for(i = 0; i < n - 1; i++)
		{
			for(j = 0; j < n - i - 1; j++)
			{
				if(arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		for(i = n - 1; i > n - 1 - k; i--)
			sum = sum + arr[i];
		for(i = 0; i < k; i++)
			sum = sum - arr[i];
		printf("%d\n", sum);
	}
	return 0;
}
