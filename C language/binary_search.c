/*
Fill in the missing lines of code in the program below so that the below program executes as per the details provided below.

 - Accepts an array of marks of students and then accepts a specific mark as an integer search value.
 - Prints the index of the mark in the array
 - If the given mark is not found, then the program prints -1 as the output.
 */



#include<stdio.h>

void main()
{
    int marksize;
    scanf("%d",&marksize);
    //Declare an Array for the desired size.
    int marks[marksize];

    //Accept the input values
    int ctr;
    for(ctr=0; ctr<marksize; ctr++)
    {
        scanf("%d",&marks[ctr]);
    }

    int markToSearch;
    scanf("%d",&markToSearch);

    //Now do the linear search.
    int leftNodeIndex=0, rightNodeIndex=marksize-1, middle;
    while(leftNodeIndex <= rightNodeIndex)
    {
        middle = (leftNodeIndex+rightNodeIndex)/2;

        if(marks[middle] < markToSearch)
        {
            //Then the search value is not in the left half.
            leftNodeIndex = middle+1;
        }
        else if(marks[middle] > markToSearch){
            rightNodeIndex = middle-1;
        }
        else if(marks[middle] == markToSearch)
        {
            //Index value found.
            printf("%d",middle);
            return;
        }
    }//end of while loop

    //If the execution comes here, then no mark in the list equal to the search value
    printf("-1");

}