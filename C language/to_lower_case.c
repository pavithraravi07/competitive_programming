/*

Fill in the missing lines of code so that the program converts the input character to lower case.

Hint: Use the function tolower

*/



#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter;
    scanf("%c", &letter);
    printf("%c",tolower(letter));
    return 0;
}