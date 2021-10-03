/*
Fill in the missing lines of code in the program below so that it accepts a string value and print the last occurring vowel.

Example Input/Output:
- If the input value is boredom then the output is o
- If the input value is management then the output is e

*/



#include <stdio.h>

int main()
{
    char strvalue[100];
    fgets(strvalue,100,stdin);

    char *ptr=strvalue;
    char *vowel;

    while(*ptr != '\0')
    {
        if(toupper(*ptr) == 'A' || toupper(*ptr) == 'E' || toupper(*ptr) == 'I' || toupper(*ptr) == 'O' || toupper(*ptr) == 'U')
        {
            vowel=ptr;
        }
        ptr++; //Point to next letter.
    }//end of while loop

    printf("%c",*vowel);

    return 0;
}