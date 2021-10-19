/*

The program below accepts a string value and then compares if first and last characters are same. The character value is considered case insensitive, that is E is same as e.
- if they are same the program prints yes
- else the program prints no
Example Input/Output:
If the string value is Eligible then the output is yes (As the comparison is case insensitive E is same as e)
If the string value is tight then the output is yes
If the string value is nightlight then the output is no

Hint: When comparing convert both the characters to lower case or upper case and compare.

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    scanf("%s", input);

    char firstLetter = input[0];
    char lastLetter = input[strlen(input)-1];

    if(tolower(firstLetter) == tolower(lastLetter))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
