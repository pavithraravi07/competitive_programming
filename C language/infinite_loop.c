/*

The below program goes into an infinite loop as the counter is not incremented inside the loop.
Insert the missing line of code to increment the counter by 1 (like using counter++ ) so that the program executes successfully and prints 12345

*/

#include <stdio.h>

int main()
{
    int counter=1;
    while(counter <= 5){
        printf("%d",counter);
        counter++;
    }//end of while
    return 0;
}