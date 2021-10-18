/*
The program below accepts a string value and a character as input. It then prints the number of times the character is present in the string value. The character value is considered case insensitive, that is E is same as e.

Example Input/Output:
If the string value is cabbage and the character is a then the output is 2 (As a appears twice in cabbage)
If the string value is Everest and the character is e then the output is 3 (As e appears twice and E appears once in Everest.)
Fill in the missing lines of code to complete the execution of the program.
Hint: When comparing convert both the characters to lower case or upper case and compare.
*/


#include <stdio.h>
#include <ctype.h>

int main()
{
    char strvalue[100];
    char letterToFind;

    //Read input values.
    scanf("%s\n%c", strvalue, &letterToFind);
    
    int occurrenceCount=0;
    int index=0;
    while(strvalue[index] != '\0')
    {
        if(tolower(letterToFind) == tolower(strvalue[index]))
        {
            occurrenceCount++;
        }
        index++;
    }//end of while loop

    printf("%d",occurrenceCount);
    return 0;
}