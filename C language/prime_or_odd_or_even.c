/*

Please fill in the missing lines of code to implement the logic given below.

Logic:

- Accept a number x as input.
- if x is a prime number, print "prime"
- if x is not a prime number, then print "odd" if x is an odd number
- if x is not a prime number, then print "even" if x is an even number

*/



#include<stdio.h>
void main()
{
	int x;
	scanf("%d", &x);

	int cnt = 0;
	for(int i = 2; i<=x; i++)
	{
		if(x%i == 0)
			cnt++;
	}

	if(cnt == 1)
		printf("prime");
	else
		printf(x%2 == 0 ? "even" : "odd");
} 