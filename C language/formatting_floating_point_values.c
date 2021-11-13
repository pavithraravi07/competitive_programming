/*

Fill in the missing lines of code so that the program will accept a real value and print up to 2 decimal places.

Example Input/Output 1:
Input:
1.2345

Output:
1.23


Example Input/Output 2:
Input:
100.4389

Output:
100.44

Explanation:
It is 100.44 instead of 100.43 as the round up will happen due to the 8 after 3.

*/


#include<stdio.h>
void main()
{
   float val;
   scanf("%f",&val);
   printf("%.2f",val);
}