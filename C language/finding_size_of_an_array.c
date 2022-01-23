/*

Fill in the missing lines of code so that the program prints the size of the short Array ages.

*/



#include <stdio.h>

int main()
{
    int inputValue;
    scanf("%d",&inputValue);

    unsigned short ages[inputValue];

    //Reset the input value.
    inputValue=0;

    int arrayLength = sizeof(ages)/sizeof(ages[0]);
    printf("%d",arrayLength);

    return 0;
}
 