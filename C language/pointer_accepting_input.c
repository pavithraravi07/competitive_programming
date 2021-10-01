/*
Three  integer values are passed as input to the program. 
Fill in the missing lines of code so that the program prints the sum of the three input values.
*/



#include <stdio.h>

int main()
{
    int x,y,z;

    int *ptr1 = &x;
    int *ptr2 = &y;
    int *ptr3 = &z;

    scanf("%d",ptr1);
    scanf("%d",ptr2);
    scanf("%d",ptr3);

    printf("%d",x+y+z);
    return 0;
}
