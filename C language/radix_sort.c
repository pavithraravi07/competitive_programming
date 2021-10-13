/*
Please fill in the code so that the program prints the sorted list in the descending order.

Hint: Print the array in the reverse order so that it is printed in descending order.

*/



#include<stdio.h>

void sort(int arr[], int size);

void main()
{
    int listsize;
    scanf("%d",&listsize);
    //Declare an Array for the desired size.
    int values[listsize];

    //Accept the input values
    int ctr;
    for(ctr=0; ctr<listsize; ctr++)
    {
        scanf("%d",&values[ctr]);
    }

    //Now call sort
    sort(values,listsize);

    //Print the sorted list
    for(ctr=listsize-1; ctr >= 0; ctr--)
    {
        printf("%d ",values[ctr]);
    }

}

void sort(int arr[], int size)
{

    // Radix 10 is used
    int i;
    int intermediateSortedArray[size];
    int significantDigit = 1;


    //Find the largest number
    int index;
    int largestNum = arr[0];
    for(index=1; index < size; index++)
    {
        if(arr[index] > largestNum)
        {
            largestNum =arr[index];
        }
    }

    // Loop until we reach the largest significant digit
    while (largestNum / significantDigit > 0)
    {

        int bucket[10] = { 0 };

        // Counts the number of digits that will go into each bucket
        for (i = 0; i < size; i++)
            bucket[(arr[i] / significantDigit) % 10]++;


        //Find cumulative count
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i-1];

        // Use the bucket to fill the intermediate sorted array
        for (i = size - 1; i >= 0; i--)
            intermediateSortedArray[--bucket[(arr[i] / significantDigit) % 10]] = arr[i];


        for (i = 0; i < size; i++)
            arr[i] = intermediateSortedArray[i];

        // Move to next significant digit
        significantDigit *= 10;


    }
}
