/*

A school student is learning maths and wants to write a program that accepts a positive integer and prints relevant output based on the following conditions.

- The program prints tic if the input number is divisible only by 3.
- The program prints fic if the input number is divisible only by 5.
- The program prints ticfic if the input number is divisible both by 3 and 5.
- The program does not print anything if the number is not meeting any of the above criteria.

*/


#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);

    //You can also use the condition number%15 == 0 check as 15 is the LCM of 3 and 5.
    if(number%3 == 0 && number%5 == 0)
    {
        printf("ticfic");
    }
    else if(number%3 == 0)
    {
        printf("tic");
    }
    else if(number%5 == 0)
    {
        printf("fic");
    }

    return 0;
}