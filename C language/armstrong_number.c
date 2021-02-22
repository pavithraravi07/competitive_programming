/*The k-digit number N is an Armstrong number if and only if the k-th power of each digit sums
to N.
Given a positive integer N, return true if and only if it is an Armstrong number.*/

#include <stdio.h>
#include <math.h>
int main()
{
	long long int num, sum = 0, nod = 0, rem, temp;
	scanf("%lld", &num);
	temp = num;
	while(num>0){
		nod++;
		num = num / 10;
	}
	num = temp;
	while (num > 0){
		rem = num % 10;
		sum = sum + pow(rem, nod);
		num = num / 10;
	}
	if(sum == temp)
		printf("true");
	else
		printf("false");
	return 0;
}
