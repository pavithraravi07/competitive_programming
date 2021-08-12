/*
Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to 1 decimal place) separated by a space on the second line.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float no1, no2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &no1, &no2);
    printf("%d %d\n", num1 + num2, num1 - num2);
    printf("%.1f %.1f", no1 + no2, no1 - no2);
    return 0;
}
