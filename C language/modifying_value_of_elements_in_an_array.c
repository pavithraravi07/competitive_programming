/*

In the below program, make the pointer ptr to point to the address of the third element of the int Array numbers.

As the value in the third element is 300, the value is multiplied by 100 and hence the output of the program must be 30000.

*/


#include <stdio.h>

int main()
{
    int numbers[] = {100,200,300,400,500};
    int *ptr = numbers;

    /*Increment the position of the pointer by 2 so that it points to the address of the int value 300*/
    ptr = ptr+2;

    *ptr = *ptr*100;

    /*Reset it back to the initial position of the Array. That is the pointer will point to the memory address of the int value 100 */
    ptr = numbers;

    /* Now print the value at the third element of the int Array */
    printf("%d",*(ptr+2));

    return 0;
}