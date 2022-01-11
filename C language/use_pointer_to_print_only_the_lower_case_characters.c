/*

The program below must accept a string value and print only the letters in lower case.

Example Input/Output:
- If the input is GENetiC the output is eti
- If the input is DoPPLer the output is oer

Fill in the missing lines of code to complete the program.



*/


#include <stdio.h>

int main()
{
    char stringvalue[100];
    fgets(stringvalue,100,stdin);

    char *ptr=stringvalue;

    while(*ptr != '\0')
    {
        if(islower(*ptr))
        {
            printf("%c",*ptr);
        }
        ptr++; //Points to the next character
    } //end of while loop

    return 0;
}
 