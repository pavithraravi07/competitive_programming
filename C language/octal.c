/*
Assign the value to the int variable num2 so that the output of the program is 900.
Hint: num1 is assigned a value in Octal format. 
011 in octal format denotes 9 (as 011 in octal = 1*8 + 1*1 = 9)
*/



#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 011;
    num2 = 100;
    printf("%d",num1*num2);
    return 0;
}