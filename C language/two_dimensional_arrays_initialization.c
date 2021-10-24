/*

In the below program, numbers is a 2*2 two dimensional Array. 
Fill in the missing lines of code to initialize the Array numbers so that all the elements in it are 
ssigned a value of 100;

*/



#include <stdio.h>

int main()
{
    int numbers[2][2] = {100,100,100,100};

    printf("%d ",numbers[0][0]);
    printf("%d ",numbers[0][1]);
    printf("%d ",numbers[1][0]);
    printf("%d ",numbers[1][1]);
    return 0;
}