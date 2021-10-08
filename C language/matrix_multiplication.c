/*
Fill in the missing lines of code in the program below multiplies the two matrices and prints the resultant product matrix's last row last column value.
*/



#include<stdio.h>

void main()
{
    int matrixArows, matrixAcols;
    int matrixBrows, matrixBcols;
    scanf("%d",&matrixArows);
    scanf("%d",&matrixAcols);
    scanf("%d",&matrixBrows);
    scanf("%d",&matrixBcols);

    if(matrixAcols != matrixBrows)
    {
        printf("Column count of first matrix (Matrix A) is not equal to Row count of second matrix (Matrix B). Hence they cannot be multiplied.");
        return;
    }

    //Declare an Array for the desired size of matrices.
    int matrixA[matrixArows][matrixAcols];
    int matrixB[matrixBrows][matrixBcols];

    int resultmatrix[matrixArows][matrixBcols]; //To store the result of subtraction.
    int rowctr,colctr;

    //Initialize all values to zero
    for(rowctr=0; rowctr<matrixArows; rowctr++)
    {
        for(colctr=0; colctr<matrixBcols; colctr++)
        {
            resultmatrix[rowctr][colctr] = 0;
        }
    }

    //Accept the input values for the first matrix A

    for(rowctr=0; rowctr<matrixArows; rowctr++)
    {
        for(colctr=0; colctr<matrixAcols; colctr++)
        {
            scanf("%d",&matrixA[rowctr][colctr]);
        }

    }

    //Accept the input values for the second matrix
    for(rowctr=0; rowctr<matrixBrows; rowctr++)
    {
        for(colctr=0; colctr<matrixBcols; colctr++)
        {
            scanf("%d",&matrixB[rowctr][colctr]);
        }

    }

    //Now perform the multiplication.
    int ctr;
    for(rowctr=0; rowctr<matrixArows; rowctr++)
    {
        for(colctr=0; colctr<matrixBcols; colctr++)
        {
            for(ctr=0; ctr < matrixAcols; ctr++)
            {
                resultmatrix[rowctr][colctr] += matrixA[rowctr][ctr] * matrixB[ctr][colctr];
            }
        }

    }

    //Now print the last row last column value
    printf("%d",resultmatrix[matrixArows-1][matrixBcols-1]);

}