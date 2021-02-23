/*Given an array of n integers, rearrange them so that the sum of the absolute differences of all
adjacent elements is minimized. Then, compute the sum of those absolute differences.

Example
n = 5
arr = [1, 3, 3, 2, 4]
If the list is rearranged as arr' = [1, 2, 3, 3, 4], the absolute differences are |1 - 2| = 1, |2 - 3| = 1,
|3 - 3| = 0, |3 - 4| = 1. The sum of those differences is 1 + 1 + 0 + 1 = 3.

Function Description
Complete the function minDiff in the editor below.
minDiff has the following parameter:
arr: an integer array
Returns:
int: the sum of the absolute differences of adjacent elements*/

int compare(const void * a, const void * b) 
{ 
    return ( * (int*)a - * (int*)b ); 
} 
 
int minDiff(int arr_count, int* arr) {
    int sum=0;
    qsort(arr, arr_count, sizeof(int), compare);
    for(int i=0;i<arr_count-1;i++)
    {
        sum+=arr[i+1]-arr[i];
    }
    return sum;
}
