/*


The below program accepts a string as input. Then it accepts a character as an input, converts it to upper case and appends it to the string value. Finally the revised string value is printed.

Example Input/Output:
- If the input is littl & e the program prints littlE
- If the input is meetin & g  the program prints meetinG


*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char stringvalue[100], charToAppend;
    scanf("%s\n%c", stringvalue, &charToAppend);

    int index=strlen(stringvalue);
    stringvalue[index] = toupper(charToAppend);

    index++;
    stringvalue[index] = '\0';

    printf("%s", stringvalue);

    return 0;
}
 