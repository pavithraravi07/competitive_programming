/*A set of N numbers (separated by one space) is passed as input to the program. The program
must identify the count of numbers where the number is odd number.

Input Format:
The first line will contain the N numbers separated by one space.

Boundary Conditions:
3 <= N <= 50
The value of the numbers can be from -99999999 to 99999999

Output Format:
The count of numbers where the numbers are odd numbers.*/

#include <stdio.h>
int main()
{
	int num, count = 0;
	char ch;
	do
	{
		scanf("%d", &num);
		if(num % 2 == 1)
			count++;
		scanf("%c", &ch);
	} while (ch != '\n');
	printf("%d", count);
	return 0;
}
