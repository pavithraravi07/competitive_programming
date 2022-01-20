/*

The program below accepts two floating point values and stores them in the double array values. Fill in the missing lines of code so that the program prints the average of the two values with a precision up to 2 decimal places.

Note: To find the average add the two values and divide the sum by 2.

Hint: Use the format code %0.2lf to print upto two decimal places.


*/


#include <stdio.h>

int main()
{
    double values[2];
    scanf("%lf",&values[0]);
    scanf("%lf",&values[1]);

    double average = (values[0]+values[1])/2;
    printf("%0.2lf",average);

    return 0;
}