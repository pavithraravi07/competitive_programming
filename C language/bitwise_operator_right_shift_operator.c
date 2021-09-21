/*
Assign a value to the variable shift so that the program prints 3 as output.
*/



#include <stdio.h>

int main()
{
    unsigned int a=24;
    int shift;
    shift=3;
    printf("%d",a>>shift);
    return 0;
}