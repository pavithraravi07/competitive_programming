/*
Define the MACRO constant value for DEF accordingly so that the below program prints 100 as the output.
*/



#include <stdio.h>

#define DEF 100
void main()
{
#ifndef DEF
    return;
#endif
    printf("%d",DEF);

}