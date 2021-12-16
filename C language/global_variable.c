/*

Fill in the missing lines of code to declare variables x and y so that the program prints 101 200 102

*/



#include <stdio.h>
int printValues();

int counter = 200;

int main()
{
    printValues();
    printf("%d ",counter);
    printValues();
    return 0;
}

int printValues()
{
    static int counter=100;
    printf("%d ",++counter);
}