/*

Fill in the single line to initialize the variable number so that the program below prints 6 7 8 9 10

*/




#include <stdio.h>

int main()
{
    int number;

    number = 5;

    while(++number <= 10){
        printf("%d ",number);
    }

    return 0;
}