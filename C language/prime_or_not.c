/*Given an integer, if the number is prime, return 1. Otherwise return its smallest divisor greater
than 1.

Example
n = 24
The number 24 is not prime: its divisors are [1, 2, 3, 4, 6, 8, 12, 24]. The smallest divisor greater
than 1 is 2.

Function Description
Complete the function isPrime in the editor below.
isPrime has the following parameter(s):
long n: a long integer to test
Returns
int: if the number is prime, return 1; otherwise returns the smallest divisor greater than 1*/

#include<stdio.h>
int isPrime(int n);
int main(){
	int a;
	scanf("%d",&a);
	int c=isPrime(a);
	printf("%d",c);
	return 0;
}
int isPrime(int n)
{
	int i;
	for(i = 2; i <=n/2; i++)
		if (n % i == 0)
			return i;
	return 1;
}
