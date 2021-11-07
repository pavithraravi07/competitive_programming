/*

Fill in the code to initialize the value of the variable number so that the program prints 10 8

*/



#include <stdio.h>

int main() {
    int number;

    number=10;

    //Prints 10 as 10 is decremented after the statement execution
    printf("%d ",number--);
    //Now number has the value as 9
    //Prints 8 as 9 is decremented to 8 and then used in the statement execution
    printf("%d",--number);
    return 0;
}