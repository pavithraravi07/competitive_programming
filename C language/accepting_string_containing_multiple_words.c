/*

Fill in the code so that the program accepts a country and it's capital separated by space as input as a single String.

*/


#include <stdio.h>

int main()
{
    char countrycapital[100];

    fgets(countrycapital,100,stdin);

    printf("%s", countrycapital);
    return 0;
}