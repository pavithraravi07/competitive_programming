/*

Christy wants to write a program to teach her son some words starting with specific letters. So she wants to write a program whose output will be based on the input following the conditions below.

- If the letter e is the input, egg is printed.
- If the letter f is the input, fish is printed.
- If the letter h is the input, hen is printed.
- If the letter q is the input, queen is printed.
- If the letter u is the input, umbrella is printed.
Help Christy to complete the program by filling in the missing lines of code within the switch statement.


*/




#include <stdio.h>

int main()
{
    char input;
    input = getchar();

    switch(input)
    {
    case 'e':
        printf("egg");
        break;
    case 'f':
        printf("fish");
        break;
    case 'h':
        printf("hen");
        break;
    case 'q':
        printf("queen");
        break;
    case 'u':
        printf("umbrella");
        break;
    }//end of switch statement

    return 0;
}