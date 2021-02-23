/*You are given an array of n integer numbers a1, a2, . . . , an. Calculate the number of pair of
indices (i, j) such that 1 ≤ i < j ≤ n and ai xor aj = 0.

Input format
- First line: n denoting the number of array elements
- Second line: n space separated integers a1, a2, . . . , an.

Output format
Output the required number of pairs.*/

#include <stdio.h>
int main()
{
	int n, arr[10000], i, j, count=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
		if (arr[i] == arr[j])
			count++;
		}
	}
	printf("%d", count);
	return 0;
}