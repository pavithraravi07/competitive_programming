/*

Fill in the missing lines of code so that the function multiply returns the product of two integers passed as input.

*/



#include <stdio.h>

int multiply(int n1,int n2)
{
    return n1*n2;
}

int main()
{
    int number1, number2;
    scanf("%d%d",&number1,&number2);

    printf("%d",multiply(number1,number2));

    return 0;
}