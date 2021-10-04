/*
Please fill in the missing lines of code to implement the logic given below.

Logic:

- The first line will contain N indicating the number of values in the list.
- In the next N lines accept a list of N numbers as input.
- Then isolate the odd numbers and even numbers in the list
- Print the odd numbers first sorting them in ascending order
- Print the even numbers next sorting them in ascending order
Example Input/Output:
Input:
5
102
21
76
53
80

Output:
21 53 76 80 102

Explanation:

The first line in the input indicates there are 5 numbers in the list.
*/



#include<stdio.h>

void main()
{
    int N;
    scanf("%d",&N);

    int values[N];
    int index;
    for(index=0; index<N; index++)
    {
        scanf("%d",&values[index]);
    }
    for(index = 0; index < N-1; index++)
    {
        for(int cmpIndex = index+1; cmpIndex < N; cmpIndex++)
        {
            if(values[index] > values[cmpIndex])
            {
                int temp = values[index];
                values[index] = values[cmpIndex];
                values[cmpIndex] = temp;
            }
        }
    }
    for(index = 0; index < N; index++)
    {
        if(values[index]%2 != 0)
        {
            printf("%d ", values[index]);
        }
    }
    for(index = 0; index < N; index++)
    {
        if(values[index]%2 == 0)
        {
            printf("%d ", values[index]);
        }
    }
}//end of main method