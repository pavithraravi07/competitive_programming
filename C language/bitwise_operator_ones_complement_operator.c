/*
Assign a value to the variable a so that the program prints -11 as output.

Hint: Convert the values into binary format and using the truth table find the value of a in binary format. Then convert it into decimal and assign the value.
*/



#include <stdio.h>

int main()
{
    unsigned int a;
    a=10;
    printf("%d",~a);
    return 0;
}