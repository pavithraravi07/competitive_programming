/*Calculate the sum of an array of integers.

Example
numbers = [3, 13, 4, 11, 9]
The sum is 3 + 13 + 4 + 11 + 9 = 40.

Function Description
Complete the function arraySum in the editor below.
arraySum has the following parameter(s):
int numbers[n]: an array of integers
Returns
int: integer sum of the numbers array*/

int sum=0;
for(int i=0;i<numbers_count;i++){
    sum+=numbers[i];
}
return sum;
}
