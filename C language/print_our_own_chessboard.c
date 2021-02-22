/*Let’s print a chessboard!
Write a program that takes input:
The first line contains T, the number of test cases
Each test case contains an integer N and also the starting character of the chessboard
Output Format
Print the chessboard as per the given examples*/

#include <stdio.h>
int main()
{
	int n;
	int size, i, j, count;
	char ch, first, second;
	scanf("%d", &n);
	while (n--) {
		scanf("%d",&size);
		scanf(" %c",&ch);
		if (ch == 'W')
		{
			first = 'W';
			second = 'B';
		}
		else
		{
			first = 'B';
			second = 'W';
		}
		count = 0;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (count++ % 2 == 1)
					printf("%c", second);
				else
					printf("%c", first);
			}
			if (size % 2 == 0)
				count++;
			printf("\n");
		}
	}
	return 0;
}
