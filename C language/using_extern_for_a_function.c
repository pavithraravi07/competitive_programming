/*

Fill in the missing lines of code to declare the function printSquare as extern function so that the program prints the square of the input number.

The function printSquare is declared in yet another compilation unit called beta.c which is given below.

#include <stdio.h>

void printSquare(){
    int num;
    scanf("%d",&num);
    printf("%d",num*num);
}

*/


#include <stdio.h>

extern void printSquare();

int main()
{
    printSquare();
    return 0;
}