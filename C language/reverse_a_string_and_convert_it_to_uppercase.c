/*

The program below accepts a string value and reverses the string. Then it converts the string to upper case and prints the same.
Fill in the missing lines of code so that the program performs the above logic.

Example Input/Output:
- If the input is abcdE, the output is EDCBA
- If the input is king, the output is GNIK

Hint: use toupper function

*/



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char inputstr[100];
    scanf("%s", inputstr);

    int startindex=0;
    int endindex=strlen(inputstr)-1;
    char temp;

    while(startindex < endindex)
    {
        temp=inputstr[startindex];
        inputstr[startindex] = toupper(inputstr[endindex]);
        inputstr[endindex] = toupper(temp);

        startindex++;
        endindex--;

        /*For odd length strings the middle letter should be converted to uppercase.*/
        if(startindex == endindex)
        {
            inputstr[startindex] = toupper(inputstr[startindex]);
        }
    }//end of while loop

    printf("%s", inputstr);

    return 0;
}