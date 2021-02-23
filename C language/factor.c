/*Determine the factors of a number (i.e., all positive integer values that evenly divide into a
number) and then return the pth element of the list, sorted ascending. If there is no pth element,
return 0.

Function Description
Complete the function pthFactor in the editor below.
pthFactor has the following parameter(s):
int n: the integer whose factors are to be found
int p: the index of the factor to be returned
Returns:
int: the long integer value of the pth integer factor of n or, if there is no factor at that
index, then 0 is returned

Constraints
1 ≤ n ≤ 1015
1 ≤ p ≤ 109

Example
n = 20
p = 3
The factors of 20 in ascending order are {1, 2, 4, 5, 10, 20}. Using 1-based indexing, if p = 3, then
4 is returned. If p > 6, 0 would be returned.*/

#include<stdio.h>
int pthFactor(int n, int p);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=pthFactor(a,b);
	printf("%d",c);
	return 0;
}
int pthFactor(int n, int p)
{
int i, count = 0;
for(i = 1; i <= n; i++) {
	if(n % i == 0)
	{
		count++;
		if(count == p)
		{
			return i;
			break;
		}
	}
}
if(count < p)
	return 0;

}
