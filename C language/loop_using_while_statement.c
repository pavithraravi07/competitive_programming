/*

A number is passed as input. Fill in the code so that the program prints from 1 to the input number.

Example: If the input number is 10 the program prints 1 2 3 4 5 6 7 8 9 10

Note that there is exactly one space between the printed numbers.

*/


#include <stdio.h>    

int main() {
    int number;
    scanf("%d", &number);
    
    int ctr=1;
    while(ctr <= number){
        printf("%d ",ctr);
        ctr = ctr+1;
    }
    return 0;
}