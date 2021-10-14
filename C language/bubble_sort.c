/*

Fill in the code below to sort the input number in descending order using bubble sort.

Hint: Use < in place of > and vice versa in the code given above to sort in descending order.

*/


#include<stdio.h>
void main()
{
    int listsize;
    scanf("%d",&listsize);
    //Declare an Array for the desired size.
    int values[listsize];

    int ctr;
    for(ctr=0; ctr<listsize; ctr++)
    {
        scanf("%d",&values[ctr]);
    }

    int currEndIndex = listsize-1;
    int currIndex;
    int temp;
    int pass;

    for(pass=1; pass<listsize; pass++)
    {
        for(currIndex=0; currIndex < currEndIndex; currIndex++)
        {
            if(values[currIndex] < values[currIndex+1])
            {
                //Swap
                temp = values[currIndex];
                values[currIndex] = values[currIndex+1];
                values[currIndex+1] = temp;

            }
        }
        currEndIndex--;

    }

    for(ctr=0; ctr<listsize; ctr++)
    {
        printf("%d ",values[ctr]);
    }

}