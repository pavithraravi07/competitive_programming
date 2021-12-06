/*

The below program accepts the number inputValue. Fill in the missing lines of code so that the program prints the next immediate number divisible by 12 (from the inputValue.)

For example, if the input is 24 the output is 24.
If the input is 35 the output is 36.
If the input is 110 the output is 120.

*/



#include <stdio.h>

int main()
{
    int inputValue;
    scanf("%d",&inputValue);


    while(inputValue%12 != 0){
        inputValue++;
    }

    //It comes out of the loop once the value of number is divisible by 12. So print the value.
    printf("%d",inputValue);

    return 0;
}