/*Start from integer 1, remove any integer that contains 9 such as 9, 19, 29...
So now, you will have a new integer sequence: 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, ...
Given a positive integer n, you need to return the n-th integer after removing. Note that 1 will
be the first integer.*/

#include <stdio.h>
int main()
{
	int num, r = 0, base = 1;
	scanf("%d", &num);
	while (num > 0)
	{
		r = r + num % 9 * base;
		num = num / 9;
		base = base * 10;
	}
	printf("%d", r);
	return 0;
}
