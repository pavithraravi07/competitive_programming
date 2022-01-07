/*

Fill in the missing line of code so that the program prints only the value of the third element in the int Array marks. That is the program prints only 30.

*/


#include <stdio.h>

int main()
{
    int marks[] = {10,20,30,40,50};
    int *ptr = marks;

    ptr+=2;  //Now ptr will be pointing at the memory address of 30.

    printf("%d ",*ptr);
    return 0;
}