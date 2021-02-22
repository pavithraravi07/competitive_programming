/*Take a number, reverse it and add it to the original number until the obtained number is a
palindrome.*/

#include <stdio.h>
int main()
{
	long long int num, sum, revnum, tempnum, tempsum;
	scanf("%lld", &num);
	while(1)
	{
		revnum = 0;
		tempnum = num;
		while(num){
			revnum = revnum * 10 + (num % 10);
			num = num / 10;
		}
		sum = tempnum + revnum;
		tempsum = sum;
		revnum = 0;
		while(sum){
			revnum = revnum * 10 + (sum % 10);
			sum = sum / 10;
		}
		if(tempsum == revnum)
			break;
		num = tempsum;
	}
	printf("%lld", tempsum);
	return 0;
}
