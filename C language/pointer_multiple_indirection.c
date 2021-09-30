/*
In the below program, fill in the missing line to assign the value to the int pointer ptr3 so that the program accepts the input integer value and stores it in the variable number.
*/



#include <stdio.h>

int main()
{
    int number;
    int *ptr1 = &number;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
   
    scanf("%d", **ptr3);

    printf("%d",number);
    return 0;
}