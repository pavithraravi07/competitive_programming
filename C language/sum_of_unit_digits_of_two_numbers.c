/*

Two numbers are passed as input. The program has to print the sum of the unit digits of the two numbers.

Examples:
- If the input numbers are 40, 52 then the output must be 2 (0+2).
- If the input numbers are 86, 57 then the output must be 13 (6+7).

*/


#include <stdio.h>

int main()
{
    int firstNumber,secondNumber;
    scanf("%d",&firstNumber);
    scanf("%d",&secondNumber);

    //Logic to find the sum of unit digits of the numbers and print it here
    int unitDigitsSum = firstNumber%10 + secondNumber%10;
    printf("%d",unitDigitsSum);

    return 0;
}
 