/*

Define a constant  MULTIPLIER of int data type and assign the value of 10 to it so that the program will print the value of 10 multiplied with the inputvalue.

Example Input/Output:
- If the input is 20 then the output must be 200.
- If the input is 5 then the output must be 50.

*/



#include <stdio.h>

int main()
{
    const int MULTIPLIER=10;

    int inputvalue;
    scanf("%d",&inputvalue);

    printf("%d", inputvalue*MULTIPLIER);

    return 0;
}