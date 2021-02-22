/*Task
Given an integer, n, print its first 10 multiples. Each multiple n X i (where 1 ≤ i ≤ 10) should be
printed on a new line in the form: n x i = result.

Input Format
A single integer, n.

Constraints
2 ≤ n ≤ 20

Output Format
Print 10 lines of output; each line i (where 1 ≤ i ≤ 10) contains the result of n X i in the form:
n x i = result.*/

#include <stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
	printf("%d x %d = %d\n", n, i, n * i);
	return 0;
}
