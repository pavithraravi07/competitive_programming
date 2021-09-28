/*
Assign the address of the int variable x to ptr1 and the address of the int variable y to ptr2 so that the program prints the sum of x and y as output.
*/


#include <stdio.h>
int main()
{
    int x,y;
    int *ptr1, *ptr2;

    scanf("%d%d",&x,&y);

    ptr1 = &x;
    ptr2 = &y;              

    printf("%d",*ptr1+*ptr2);
    return 0;
}