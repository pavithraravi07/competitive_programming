/*

Fill in the missing lines of code so that the program below accepts a string value and prints it in upper case.

Example Input/Output:
- If the input is Asia the output is ASIA
- If the input is ink the output is INK

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    scanf("%s", name);

    int index=0;
    while(name[index] != '\0'){
        name[index] = toupper(name[index]);
        index++;
    }

    printf("%s", name);

    return 0;
}