/*
The program below needs to print the values at odd positions (that is the values at index 0, 3, 5 and so on).
Fill in the missing lines of code so that the program executes successfully.

Input Format:
- The first line contains N - which the count of numbers in an array.
- The next N lines contain the array values.

Example Input & Output:
Input:
5
100
200
345
421
500

Output:
100
345
500
*/


#include<stdio.h>

void main()
{
    int N;
    scanf("%d",&N);

    int arr[N];
    int index;
    //Accept input values
    for(index=0; index<N; index++)
    {
        scanf("%d",&arr[index]);
    }

    int *ptr=arr;
    for(index=0; index<N; index+=2){
        printf("%d\n",*ptr);
        //Fill in the code here
        ptr+=2;
    }//end of for loop

}//end of main method