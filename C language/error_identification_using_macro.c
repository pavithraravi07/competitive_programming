/*
Kajal wants to greet her friends "Happy Birthday" on their birthday. 
So she writes the below program and uses Macro definition 
using #define to define a constant BIRTHDAY_MESSAGE. 
But the program is not executing and printing the message Happy Birthday!. 
Please help Kajal by rectifying the error and executing the program successfully.
*/



#include <stdio.h>
#define BIRTHDAY_MESSAGE "Happy Birthday!"
int main()
{
    printf(BIRTHDAY_MESSAGE);
    return 0;
}