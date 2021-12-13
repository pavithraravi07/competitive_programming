/*

Fill in the missing lines of code so that the program accepts three floating point numbers and prints their average with a precision upto two decimal places.

Note: For precision upto two decimal places use the format code %.2lf

Hint: Find the sum of three numbers and divide the sum by 3 to arrive at the average.

*/




#include <stdio.h>

int main()
{
    double x,y,z;
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);

    double average = (x+y+z)/3;
    printf("%.2lf",average);

    return 0;
}