/*Determine all positive integer values that evenly divide into a number, its factors. Return the
pth element of your list, sorted ascending. If there is no pth element, return 0.
For example, given the number n = 20, its factors are {1,2,4,5,10,20}. Using 1-based indexing if
p = 3, return 4. If p > 6, return 0.
Complete the code in the editor below. The function should return a long integer value of the
pth integer factor of n.
It has the following:
n: an integer
p: an integer

Constraints
• 1 ≤ n ≤ 1015
• 1 ≤ p ≤ 109*/


#include <stdio.h>
int main() {
	int n, p, f = 0, i;
	scanf("%d", &n);
	scanf("%d", &p);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			f++;
			if (f == p)
			printf("%lld", i);
		}
	}
	if (p > f)
	printf("0");
	return 0;
}