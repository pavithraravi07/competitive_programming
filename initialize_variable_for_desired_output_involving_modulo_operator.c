/*

Please fill in the single line of code to initialize the variable number so that the output of the program is 12 32 52 72 92

*/



#include <stdio.h>

int main()
{
    int number;
    number = 12;

    while(number <= 100)
    {
        if(number%5 == 2)
        {
            printf("%d ",number);
        }

        number = number+20;
    }//end of while loop

    return 0;
}