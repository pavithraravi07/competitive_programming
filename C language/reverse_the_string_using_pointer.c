/*

The program below must accept a string value and print the reverse of it.

Example Input/Output:
- If the input is abcde the output is edcba
- If the input is king the output is gnik

Initialize the char ptr so that it completes the program to perform the logic mentioned above.

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char stringvalue[100];
    scanf("%s", stringvalue);


    int length = strlen(stringvalue);
    char *ptr;

    
    ptr = stringvalue+length-1;

    do
    {
        printf("%c",*ptr);

    }
    while(ptr-- != &stringvalue[0]);

    return 0;
}