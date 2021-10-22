/*

The program accepts a string which will contain alphabets, numbers and special characters like hyphen, underscore.
Fill in the missing lines of code so that the program prints the count of alphabets in the string value.
Example Input/Output:
- If the input is c33abd9v6, the output is 5
- If the input is ab5cd9e_fg22bn, the output is 9

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char inputstr[100];
    fgets(inputstr,100,stdin);

    int alphabetCount=0;

    int index=0;
    while(index < strlen(inputstr))
    {
        if(isalpha(inputstr[index]))
        {
            alphabetCount++;
        }
        index++;
    }//end of while loop

    printf("%d",alphabetCount);

    return 0;
}