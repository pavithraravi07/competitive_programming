/*

Fill in the code below to sort the input list in ascending order using insertion sort.

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

    //Sorting logic below.
    int pass;
    for(pass=1; pass < listsize; pass++)
    {
        int currentValue=values[pass];
        int index = pass;
        //Go forward and find the position to insert.
        while(index > 0 && values[index-1] < currentValue)
        {
            values[index] = values[index-1];
            index--;
        }

        values[index] = currentValue;

    }


    //Print the sorted list
    for(ctr=0; ctr<listsize; ctr++)
    {
        printf("%d ",values[ctr]);
    }

}