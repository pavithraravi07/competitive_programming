/*

The program given below should accept a string value as input and remove a given character (which is also passed as an input).

Example Input/Output:
- If the input string value is engine and the character to remove is e the output is ngin
- If the input string value is mindblowing and the character to remove is i the output is mndblowng

*/



#include <stdio.h>
#include <ctype.h>

int main()
{
    char stringvalue[101], charToDelete;
    scanf("%s\n%c", stringvalue, &charToDelete);

    int index=0, insertPosition=0;

    while(stringvalue[index] != '\0')
    {
        if(stringvalue[index] != charToDelete){
            //Character is allowed.
            stringvalue[insertPosition] = stringvalue[index];
            insertPosition++;
        }
        index++;
    }

    stringvalue[insertPosition] = '\0';
    printf("%s", stringvalue);
    return 0;
}
 