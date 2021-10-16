/*

Fill in the code below to sort the input list in ascending order using selection sort.

Hint: Use < in place of > and vice versa in the code given above to sort in descending order

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
    int position;
    int currLargestIndex;
    for(position=0; position < listsize; position++)
    {
        int currLargestIndex=position;
        int index = position+1;

        while(index < listsize)
        {
            if(values[index] > values[currLargestIndex])
            {
                currLargestIndex=index;
            }

            index++;
        }

        int temp=values[currLargestIndex];
        values[currLargestIndex] = values[position];
        values[position]=temp;

    }

    //Print the sorted list
    for(ctr=0; ctr<listsize; ctr++)
    {
        printf("%d ",values[ctr]);
    }

}