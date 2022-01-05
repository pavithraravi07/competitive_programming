/*

Fill in the missing lines of code so that the method printVowels prints the vowels in the string value passed as parameter.

Example Input/Output:
- If the input value is abaCUs the output must be aaU
- If the input value is rose the output must be oe

*/



#include <stdio.h>
void printVowels(char *ptr)
{
    char current;
    while(*ptr != '\0')
    {
        current=toupper(*ptr);
        if(current=='A' || current=='E' || current=='I' || current=='O' || current=='U')
        {
            putchar(*ptr);
        }

        ptr++;
    }
}

int main()
{
    char stringvalue[100];
    fgets(stringvalue,100,stdin);
    printVowels(stringvalue);
    return 0;
}
