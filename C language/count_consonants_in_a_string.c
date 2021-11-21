/*


The program given below should accept a string value as input and print the count of consonants in it.

Note: The consonants can be in upper or smaller case.

Example Input/Output:
- If the input is enginEER the output is 4 (4 consonants are present - n g n R)
- If the input is management the output is 6


*/



#include <stdio.h>
#include <ctype.h>

int main()
{
    char stringvalue[100];
    scanf("%s", stringvalue);

    int index=0, consonantCount = 0;
    char current_letter;

    while(stringvalue[index] != '\0')
    {
        current_letter = tolower(stringvalue[index]);
        if(current_letter != 'a' && current_letter != 'e' && current_letter != 'i' && current_letter != 'o' && current_letter != 'u')
        {
            consonantCount++;
        }
        index++;
    }

    printf("%d",consonantCount);

    return 0;
}