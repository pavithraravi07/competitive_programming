/*
Fill in the missing lines of code in the program below subtracts the matrices and prints the resultant matrix.
*/



#include<stdio.h>

void main()
{
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);

    //Declare an Array for the desired size.
    int leftmatrix[rows][cols];
    int rightmatrix[rows][cols];
    int resultmatrix[rows][cols]; //To store the result of subtraction.

    //Accept the input values for the first matrix
    int rowctr,colctr;
    for(rowctr=0; rowctr<rows; rowctr++)
    {
        for(colctr=0; colctr<cols; colctr++)
        {
            scanf("%d",&leftmatrix[rowctr][colctr]);
        }

    }

    //Accept the input values for the second matrix
    for(rowctr=0; rowctr<rows; rowctr++)
    {
        for(colctr=0; colctr<cols; colctr++)
        {
            scanf("%d",&rightmatrix[rowctr][colctr]);
        }

    }

    //Now perform the subtraction.
    for(rowctr=0; rowctr<rows; rowctr++)
    {
        for(colctr=0; colctr<cols; colctr++)
        {
            resultmatrix[rowctr][colctr] = leftmatrix[rowctr][colctr] - rightmatrix[rowctr][colctr];
        }

    }

    //Now print the result
    for(rowctr=0; rowctr<rows; rowctr++)
    {

        for(colctr=0; colctr<cols; colctr++)
        {
            printf("%d ",resultmatrix[rowctr][colctr]);
        }
        //Prints a line to begin the next row.
        printf("\n");

    }
}