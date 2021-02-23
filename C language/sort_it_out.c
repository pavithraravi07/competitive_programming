/*You are given an array A of non-negative integers of size m. Your task is to sort the array in non-
decreasing order and print out the original indices of the new sorted array.

INPUT :
The first line of input consists of the size of the array
The next line consists of the array of size m

OUTPUT :
Output consists of a single line of integers*/

#include <stdio.h>
int main()
{
	int m, a[100000], b[100000], i, j, temp;
	scanf("%d", &m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
		b[i] = i;//Maintain the index value
	}
	for(i = 0; i < m - 1; i++)
	{
		for(j = 0; j < m - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				temp = b[j]; //swapping the index value
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < m; i++)
		printf("%d ", b[i]);
	return 0;
}