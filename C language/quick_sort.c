/*
Fill in the code below to sort the input list in ascending order using quick sort.

Hint: Use < in place of > and vice versa in the code given above to sort in descending order.
*/



#include<stdio.h>
void sort(int arr[],int from, int to);
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

        //Now call sort again recursively splitting the Array into almost half.
        int pivot = partition(arr,from,to);
        sort(arr,from, pivot-1);
        sort(arr,pivot+1, to);
    }
}

int partition(int arr[],int left, int right)
{
    int pivotValue = arr[left];
    int initialPivotPosition = left;
    int temp;

    while (left < right)
    {
        while(arr[left] >= pivotValue && left <= right)
            left++;

        while(arr[right] < pivotValue && right >= left)
            right--;

        if (left < right)
        {
            temp        = arr[left];
            arr[left]  = arr[right];
            arr[right] = temp;
        }
    }
    arr[initialPivotPosition] = arr[right];
    arr[right] = pivotValue;
    return right;
}