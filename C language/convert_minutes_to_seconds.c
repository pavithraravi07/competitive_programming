/*


The value of minutes is passed as input as an integer value. The program must accept the input value of minutes and then convert the value of minutes to seconds and print it.

Hint: Multiply using 60 to convert minutes to seconds.


*/


#include <stdio.h>

int main()
{
    int minutes;
    /*Accept minutes as input and print the equivalent value in seconds*/
    scanf("%d",&minutes);
    printf("%d",minutes*60);
    return 0;
}
 