/*

Please fill in the missing lines of code to complete the following menu driven C program to implement a calculator.

Logic:

- Accept two numbers x and y as input.
- Accept a value as choice.
- If the choice is 1, add the two numbers and store x+y in the variable result
- If the choice is 2, subtract the two numbers and store x-y in the variable result
- If the choice is 3, multiply the two numbers and store x*y in the variable result
- If the choice is 4, divide the two numbers and store x/y in the variable result

*/




#include<stdio.h>
void main()
{
	int x, y, choice;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &choice);
	int result;

	switch(choice)
	{
		case 1: result = x + y; break;
		case 2: result = x - y; break;
		case 3: result = x * y; break;
		case 4: result = x / y; 
	}

	printf("%d", result);
}