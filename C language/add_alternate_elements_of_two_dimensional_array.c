/*You are given a two-dimensional 3*3 array starting from A [0][0]. You should add the alternate
elements of the array and print its sum. It should print two different numbers the first being
sum of A 0 0, A 0 2, A 1 1, A 2 0, A 2 2 and A 0 1, A 1 0, A 1 2, A 2 1.

Input Format
First and only line contains the value of array separated by single space.

Output Format
First line should print sum of A 0 0, A 0 2, A 1 1, A 2 0, A 2 2
Second line should print sum of A 0 1, A 1 0, A 1 2, A 2*/

#include <stdio.h>
int main()
{
	int a[9], i, sum1 = 0, sum2 = 0;
	for(i = 0; i < 9; i++)
		scanf("%d", &a[i]);
	sum1 = a[0] + a[2] + a[4] + a[6] + a[8];
	sum2 = a[1] + a[3] + a[5] + a[7];
	printf("%d\n%d", sum1, sum2);
	return 0;
}