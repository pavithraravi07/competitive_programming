/*

The program given below should accept a string value as input and print all the alphabets in upper case.

Example Input/Output:
- If the input is goNEwInD the output is NEID
- If the input is MADaM the output is MADM

*/



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char stringvalue[100];
    scanf("%s", stringvalue);

    int index=0;

    while(stringvalue[index] != '\0')
    {
        if(isupper(stringvalue[index]))
        {
            printf("%c", stringvalue[index]);
        }

        index++;
    }

    return 0;
}