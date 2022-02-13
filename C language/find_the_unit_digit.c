/*

Fill in the code inside the main function to find and print the unit digit of a positive integer.

*/

#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    printf("%d", number%10);
    return 0;
}