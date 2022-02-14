/*

Fill in the code inside the main function to print 1 if the value of the variable x is twice the value of the variable y. If not equal the program must print 0 (zero).

*/


#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d",x==2*y);
    return 0;
}