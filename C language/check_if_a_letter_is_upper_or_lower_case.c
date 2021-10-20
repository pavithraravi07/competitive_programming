/*

The program below accepts a string value and prints if the first letter is lower or upper case.

Example Input/Output:
- If the input is Asia the output is uppercase
- If the input is ink the output is lowercase

*/



#include <stdio.h>

int main()
{
    char input[100];
    fgets(input,100,stdin);

    char firstLetter = input[0];

    if(isupper(firstLetter))
    {
        printf("uppercase");
    }
    else
    {
        printf("lowercase");
    }
    
    return 0;
}