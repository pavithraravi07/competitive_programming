/*
Assign a value to the variable b so that the program prints 4 as output.

Hint: Convert the values into binary format and using the truth table find the value of b in binary format. Then convert it into decimal and assign the value.
*/



#include <stdio.h>

int main()
{
    unsigned int a,b;
    a=12;
    b=8;
    printf("%d",a^b);
    return 0;
}