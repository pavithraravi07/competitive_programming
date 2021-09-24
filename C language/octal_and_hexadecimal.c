/*
Assign a value to num3 so that the program prints 1000 as output.

Hint: num1 is initialized using Octal representation and num2 is initialized using HexaDecimal representation

Note: In HexaDecimal system, A represents 10
*/



#include <stdio.h>

int main()
{
    int num1, num2, num3;
    num1 = 012;
    num2 = 0xA;
    num3 = 10;
    printf("%d",num1*num2*num3);
    return 0;
}