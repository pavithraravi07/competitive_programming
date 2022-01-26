/*

The below program prints from 1 to the input value. 
Fill in the missing lines of code inside the for loop so that the program 
prints only the odd numbers which are from 1 to the input value inclusive.

Hint: Use continue statement to skip printing even numbers.

*/

#include <stdio.h>

int main()
{

    int inputNumber;
    scanf("%d",&inputNumber);

    int counter=1;
    for(; counter <= inputNumber; counter++)
    {
        //Use continue statement to skip printing even numbers

        if(counter%2==0){
            continue;
        }

        printf("%d",counter);
    }//end of for loop

    return 0;
}