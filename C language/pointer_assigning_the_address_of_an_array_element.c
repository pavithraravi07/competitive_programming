/*
In the below program, fill in the missing line to assign the address of the array element whose value is 18 to the int pointer ptr.

*/



#include <stdio.h>

int main()
{
    int ages[] = {30,21,18,12,40,52,44};
    int *ptr;

    ptr = &ages[2];
    printf("%d ",*ptr);     
    return 0;
}