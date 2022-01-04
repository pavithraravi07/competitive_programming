/*

Fill in the missing lines of code so that the method convertToUpperCase converts the string to upper case.

Example Input/Output:
- If the input value is abaCUs the output must be ABACUS
- If the input value is rose the output must be ROSE

 */


 
#include <stdio.h>

void convertToUpperCase(char *ptr)
{
    while(*ptr != '\0')
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
}

int main()
{
    char stringvalue[100];
    fgets(stringvalue,100,stdin);
    convertToUpperCase(stringvalue);
    printf("%s",stringvalue);
    return 0;
}
 