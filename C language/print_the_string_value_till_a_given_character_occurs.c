/*

The program given below prints the string value till the first letter of the string is repeated.

Example Input/Output:
- If the input string value is everest, then the output is ev (as the first letter e is repeated in third position, the string value is printed till the second position)
- If the input string value is management then the output is manage

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char stringvalue[100];
    scanf("%s", stringvalue);

    char firstLetter = stringvalue[0];

    int index=1;

    while(stringvalue[index] != firstLetter)
    {
        index++;
    }

    stringvalue[index] = '\0';
    printf(stringvalue);

    return 0;
}