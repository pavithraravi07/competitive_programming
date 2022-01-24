/*

The below program accepts the value of the size of the Array and creates an int Array of that size. Then it accepts input values for all elements of the Array.

Fill in the missing lines of code so that the value of the first element (value at zero index) is doubled (that is if the value at numbers[0] was 100 it should be made 200).

*/



#include <stdio.h>

int main()
{
    int array_size;
    scanf("%d",&array_size);

    int numbers[array_size];

    //Accept the values for the elements.
    int index=0;
    while(index < array_size)
    {
        scanf("%d",&numbers[index]);
        index++;
    }

    numbers[0] = numbers[0]*2;

    printf("%d",numbers[0]);

    return 0;
}
 