/*


The program below must accept a string value and print the length of the string.

Example Input/Output:
- If the input is abracadabra the output is 11
- If the input is network the output is 7

*/



#include <stdio.h>

int main()
{
    char stringvalue[100];
    fgets(stringvalue,100,stdin);

    char *ptr = stringvalue;

    int length = 0;

    while(*ptr != '\n')
    {
        length++;
        ptr++;
    }//end of while loop

    printf("%d",length);
    return 0;
}