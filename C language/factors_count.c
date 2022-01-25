/*

Anil's maths teacher has asked him to write a program to find the count of factors for a given number. Help Anil by completing the program by inserting the missing lines so that the program prints the count of factors for the number inputNumber.

Hint: Use the modulo (remainder) operator and check if the remainder is zero for divisibility. If remainder is zero increment the value of the variable factorsCount by 1.

*/



#include <stdio.h>

int main()
{

    int inputNumber;
    scanf("%d",&inputNumber);
    int factorsCount=0;

    int counter=1;
    for(; counter <= inputNumber; counter++)
    {
        if(inputNumber%counter == 0)
        {
            factorsCount++;
        }

    }
    printf("%d",factorsCount);
    return 0;
}