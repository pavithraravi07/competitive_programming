/*
A number greater than zero will be passed as input.
Fill in the code in the below program so the output is as per the conditions mentioned below.

- If the input number is even and greater than or equal to 1000 print largeeven
- If the input number is even and less than 1000 print smalleven
- If the input number is odd and greater than or equal to 999 print largeodd
- If the input number is odd and less than 999 print smallodd
*/


#include <stdio.h>    

int main() {
    int number;
    scanf("%d", &number);

    if (number % 2 == 0) {
        if (number >= 1000) {
            printf("largeeven");
        } else {
            printf("smalleven");
        }
    } else {
        if (number >= 999) {
            printf("largeodd");
        } else {
            printf("smallodd");
        }
    }
    return 0;
}