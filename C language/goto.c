/*

Fill in the missing line of code with goto statement so that the program below prints only 45.

*/



#include <stdio.h>

int main()
{

    goto labelfour;

labelone:
    printf("1");
labeltwo:
    printf("2");
labelthree:
    printf("3");
labelfour:
    printf("4");
labelfive:
    printf("5");

    return 0;
}