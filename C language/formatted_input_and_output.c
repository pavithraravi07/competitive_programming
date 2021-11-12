/*

Fill in the missing lines of code so that the program will accept two numbers separated by a single colon and then print the sum of two numbers as output.

Example Input/Output:
Input:
5:2

Output:
7

Explanation:
The numbers are 5 and 2. Their sum = 5+2 = 7 which is printed as the output.

*/


#include<stdio.h>
void main()
{
  int num1,num2;
  scanf("%d:%d",&num1,&num2);
  printf("%d",num1+num2);
}