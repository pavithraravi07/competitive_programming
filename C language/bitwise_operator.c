/*
Assign a value to the variable q so that the program prints 16 as output.

Hint: Convert the values into binary format and using the truth table find the value of q in binary format. Then convert it into decimal and assign the value.
*/





#include <stdio.h>

int main()
{
    unsigned int p,q;
    p=24;
    q=16;
    printf("%d",p&q);
    return 0;
}