/*

The program given below should accept a string value as input and print the count of vowels in it.

Note: The vowels may be in upper or smaller case.

Example Input/Output:
- If the input is enginEER the output is 4 (4 vowels are present - e i E E)
- If the input is manage the output is 3

Fill in the missing lines of code so that the program populates the count of vowels in the variable vowelCount

*/



#include <stdio.h>
#include <ctype.h>

int main()
{
    char stringvalue[100];
    scanf("%s", stringvalue);

    int index=0, vowelCount = 0;
    char current_letter;

    while(stringvalue[index] != '\0')
    {
        current_letter = tolower(stringvalue[index]);
        if(current_letter == 'a' || current_letter == 'e' || current_letter == 'i' || current_letter == 'o' || current_letter == 'u')
        {
            vowelCount++;
        }
        index++;
    }

    printf("%d",vowelCount);

    return 0;
}
 