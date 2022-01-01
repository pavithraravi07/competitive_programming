/*

Fill in the missing lines of code to invoke the printSquare function so that the function printSquare prints the square of the number passed as input.

Note: The return type of printSquare function is void as it does not return any value.

*/


#include <stdio.h>

void printSquare(int number){
   printf("%d",number*number);
}

int main() {
    int inputNumber;
    scanf("%d",&inputNumber);
    printSquare(inputNumber);
    return 0;
}
 