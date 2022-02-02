/*

A number is passed as input. Fill in the code so that the program prints from the number to the immediately lesser number which is divisible by 9.

Example 1: If the input number is 15 the program prints 15 14 13 12 11 10 9  (as 9 is divisible by 9)
Example 2: If the input number is 66 the program prints 66 65 64 63  (as 63 is divisible by 9)

Note that there is exactly one space between the printed numbers.

*/



#include <stdio.h>    

int main() {
    int number;
    scanf("%d", &number);

    do {
        printf("%d ", number);
        number = number - 1;
    } while (number%9 != 0);
    //As we need to print the number that is divisible by 9 also.
    printf("%d", number);
    
    return 0;
}