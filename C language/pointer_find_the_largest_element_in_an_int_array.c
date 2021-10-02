/*
The program below accepts five input values and stores it in an int Array.
Fill in the missing lines of code so that it finds and prints the largest element in the Array using pointer.

Example Input/Output:
- If the input values are 10, 56, 22, 34, 39 the output must be 56.
*/



#include <stdio.h>

int main()
{
    int marks[5];

    //Accept five integer values as input.
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);


    int ARRAY_SIZE=5, counter=1;
    int *ptr=marks;

    while(counter < ARRAY_SIZE)
    {
        if(marks[counter] > *ptr)
        {
            ptr=&marks[counter];
        }

        counter++; //Move to the next element in the Array.
    }//end of while loop

    printf("%d",*ptr);
    return 0;
}