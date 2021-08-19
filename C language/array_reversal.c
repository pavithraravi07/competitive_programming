/*
Given an array, of size n, reverse it.

Input Format
The first line contains an integer, n, denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    
    /* Write the logic to reverse the array. */
    int first = 0, last = num-1, temp;
    while(last>first)
    {
        temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;

        first++;
        last--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}