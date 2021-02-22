/*Given an array A of sorted integers and another non negative integer k, find if there exists 2
indices i and j such that A[i] - A[j] = k, i != j.

Input Format
1. First line is number of test cases T. Following T lines contain:
2. N, followed by N integers of the array
3. The non-negative integer k

Output format
Print 1 if such a pair exists and 0 if it doesn’t.*/

#include <stdio.h>
#include <math.h>
int main()
{
int t, n, k, arr[1000], i, j, flag;
scanf("%d", &t);
while (t--)
{
scanf("%d", &n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
scanf("%d", &k);
flag = 0;
for (int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
if (abs(arr[i] - arr[j]) == k){
flag = 1;
break;
}
}
if (flag == 1)
printf("1\n");
else
printf("0\n");
}
return 0;
}
