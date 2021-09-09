
/*
Fill in the missing lines of code to define a MACRO which will triple the value passed to it.

Example Input/Output:
- If the input value is 10 the output must be 30
- If the input value is 15 the output must be 45
*/


#include <stdio.h>

#define TRIPLE(num) num*num*num

int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",TRIPLE(number));
    return 0;
}