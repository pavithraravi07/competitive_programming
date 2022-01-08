/*

Fill in the missing line of code to make the ptr point to the address of the element of the array numbers whose value is 90.

*/




#include <stdio.h>

int main()
{
    int numbers[] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr = numbers;

    ptr = ptr+8;
    printf("%d",*ptr);

    return 0;
}