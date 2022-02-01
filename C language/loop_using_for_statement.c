/*

A number is passed as input. Fill in the code so that the program prints from 1 to the input number using for statement

Example: If the input number is 10 the program prints 1 2 3 4 5 6 7 8 9 10

Note that there is exactly one space between the printed numbers.

*/


#include <stdio.h>

int main() { 
    int number; 
    scanf("%d", &number); 
    int counter = 1; 
    for( ; counter <= number; counter = counter + 1) { 
        printf("%d ", counter);
    } 
    return 0;
}