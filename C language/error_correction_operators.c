/*

A number N is passed as input to the program. The program must print "yes" if N is divisible by 6. Else it must print "no".

Tinix coded the below program but he is getting compilation errors.
Please rectify the errors in the program for Tinix and execute the program successfully.

*/



#include<stdio.h>
void main()
{
	int inputNumber;
	scanf("%d", &inputNumber);

	if(inputNumber % 2 == 0 && inputNumber % 3 == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}