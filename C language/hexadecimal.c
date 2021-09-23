/*
Assign the value to the int variable num2 so that the output of the program is 600.

Hint: num1 is assigned a value in HexaDecimal format. 0X64 in HexaDecimal format denotes 100 (as 16*6 + 1*4 = 100)
*/



#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 0X64;
    num2 = 6;
    printf("%d",num1*num2);
    return 0;
}