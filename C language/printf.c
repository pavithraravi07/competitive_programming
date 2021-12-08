/*

The below program has an error in the printf statement which is printing the value of square.

Eliminate the error and run the program to produce the desired output.

*/



#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    int square = number*number;

    /* Here you can see that the & symbol before square is removed*/
    printf("%d",square);

    return 0;
}