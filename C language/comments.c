/*

Deborah is learning C and wants to include a multiline comment in her program shown below. But the program is giving her a compilation error.
Please help her by solving the compilation error closing the multi line comment.

*/



#include <stdio.h>

int main()
{
    /* The password must follow the rules given below
    - Contain at least one special character
    - Contain at least one number
    - Contain at least 10 characters
    */
    char password[50];
    scanf("%s", password);
    printf("%s", password);
    return 0;
}