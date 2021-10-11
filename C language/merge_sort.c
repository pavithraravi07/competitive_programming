/*
Fill in the code below to sort the input list in descending order using merge sort.

Hint: Use < in place of > and vice versa in the code given above to sort in descending order.
*/



#include<stdio.h>

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
    sort(values,0,listsize-1);

    //Print the sorted list
    for(ctr=0; ctr<listsize; ctr++)
    {
        printf("%d ",values[ctr]);
    }

}

void sort(int arr[],int from, int to)
{
    if(from < to)
    {
        int midposition = (from+to)/2;
        //Now call sort again recursively splitting the Array into almost half.
        sort(arr,from,midposition);
        sort(arr,midposition+1,to);
        mergesorted(arr,from,midposition,to);
    }
}

void mergesorted(int arr[],int from,int midposition, int to)
{
    int arrsize = sizeof(arr)/sizeof(int);
    int tempArray[to-from+1];

    int firstArrayIndex = from;
    int secondArrayIndex=midposition+1;
    int tempArrayIndex = 0;

    while(firstArrayIndex <= midposition && secondArrayIndex <= to)
    {
        if(arr[firstArrayIndex] >= arr[secondArrayIndex])
        {
            tempArray[tempArrayIndex++] = arr[firstArrayIndex++];
        }
        else
        {
            tempArray[tempArrayIndex++] = arr[secondArrayIndex++];
        }
    }

    while(firstArrayIndex <= midposition)
    {
        tempArray[tempArrayIndex++] = arr[firstArrayIndex++];
    }
    while(secondArrayIndex <= to)
    {
        tempArray[tempArrayIndex++] = arr[secondArrayIndex++];
    }

    //At this point the sorted halves are merged into the temporary Array.
    //So now replace the original Array elements with the temporary Array element values in the range.

    tempArrayIndex--; //Decrement once to be at the last stored value
    while(tempArrayIndex >= 0)
    {
        arr[from+tempArrayIndex] = tempArray[tempArrayIndex];
        tempArrayIndex--;
    }

}