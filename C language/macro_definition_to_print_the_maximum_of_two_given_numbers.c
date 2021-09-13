/*
Define the Macro MAX which returns the maximum of two given integer values and thus enabling the program to print the maximum of two given numbers.
Example Input/Output:
- If the input values are 10,30 the output is 30
- If the input values are 50,50 the output is 50
*/



#include <stdio.h>

#define MAX(a,b) a>=b ? a : b

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",MAX(x,y));
    return 0;
}