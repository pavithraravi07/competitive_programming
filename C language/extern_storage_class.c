/*

There is a compilation unit with the name one.c with the following code. (Note that the value assigned to menucode can differ).

#include <stdio.h>

int menucode = 1000;
Now your task is to fill in the missing line of code in the program below to refer to this variable menucode using extern. Once done, the program below will print the value of the menucode variable defined in one.c

*/



#include <stdio.h>

extern int menucode;

int main()
{
    printf("%d",menucode);
    return 0;
}
 