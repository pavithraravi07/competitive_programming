/*

A dad offers his son two numbers daily and asks him to choose the greater number. The son wants to write a program to print the greater of the two numbers. Help him by filling in the missing lines of code in the program below. Incase both numbers are equal print the numerical value of any of the number (As both the values are equal)

Example Input/Output:

- If the input values are 200, 300 the output is 300

- If the input values are 555, 555 the output is 555

*/



#include <stdio.h>

int main()
{
    int firstNumber,secondNumber;
    scanf("%d",&firstNumber);
    scanf("%d",&secondNumber);

    if(firstNumber >= secondNumber)
    {
        printf("%d",firstNumber);
    }
    else
    {
        printf("%d",secondNumber);
    }

    return 0;
}