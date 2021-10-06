/*
Please fill in the missing lines of code to implement the logic given below.

Three matrices are passed as input to the program. The program must implement the logic to add all the three matrices and print the resultant matrix as output.

Input Format:
- The first line will contain the value of R which indicates the number of rows.
- The second line will contain the value of C which indicates the number of columns.
- The next R*C lines will contain the value for first matrix.
- The next R*C lines will contain the value for second matrix.
- The next R*C lines will contain the value for third matrix.

Example Input/Output:
Input:
2
3
0
1
2
9
8
7
6
5
4
3
4
5
1
1
2
2
1
1
    
Output:
7 7 8
14 13 13

Explanation:
The first two lines 2 and 3 indicates the matrices are 2*3 matrices.
So the first matrix is
0 1 2
9 8 7
The second matrix is
6 5 4
3 4 5
The third matrix is
1 1 2
2 1 1

*/




#include<stdio.h>

void main()
{
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);

    //Declare a 3-D Array for the desired size.
    int matrixValues[3][rows][cols];
    int resultmatrix[rows][cols]; //To store the result of addition.

    //Accept the input values for the first matrix
    int rowctr,colctr,matrixCounter;
    for(matrixCounter=0; matrixCounter < 3; matrixCounter++)
    {
        for(rowctr=0; rowctr<rows; rowctr++)
        {
            for(colctr=0; colctr<cols; colctr++)
            {
                scanf("%d",&matrixValues[matrixCounter][rowctr][colctr]);
            }
        }
    }
    for(rowctr=0; rowctr<rows; rowctr++)
    {
        for(colctr=0; colctr<cols; colctr++)
        {
            int sum = 0;
            for(matrixCounter=0; matrixCounter<3; matrixCounter++)
            {
                sum += matrixValues[matrixCounter][rowctr][colctr];
            }
            resultmatrix[rowctr][colctr] = sum;
        }
    }
    for(rowctr=0; rowctr<rows; rowctr++)
    {
        for(colctr=0; colctr<cols; colctr++)
        {
            printf("%d ", resultmatrix[rowctr][colctr]);
        }
        printf("\n");
    }
}//end of main method