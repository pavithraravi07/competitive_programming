/*

Fill in the missing lines of code so that the below program should read three integer values and store the values in the integer array numbers (whose size is also three). Then the printf function will print the sum of the three integer values.

Hint: The index in an Array starts from zero. Use the indices 0, 1 and 2.


*/


#include <stdio.h>

int main()
{
    int numbers[3];

    scanf("%d", &numbers[0]);
    scanf("%d", &numbers[1]);
    scanf("%d", &numbers[2]);

    printf("%d",numbers[0]+numbers[1]+numbers[2]);
    return 0;
}