/*

The below program accepts two numbers from and to which defined a range. Fill in the missing lines of code so that the program prints the even numbers (separated by a single space) within the range inclusive of from and to.

*/



#include <stdio.h>

int main()
{
    int from,to;
    scanf("%d%d",&from,&to);
    
    int counter=from;
    for(; counter<=to; counter++)
    {
        if(counter%2 == 0)
        {
            printf("%d ",counter);
        }
    }

    return 0;
}