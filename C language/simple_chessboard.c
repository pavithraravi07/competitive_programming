/*Write a program that prints a simple chessboard.
Input format:
The first line contains the number of inputs T.
The lines after that contain a different values for size of the chessboard
Output format:
Print a chessboard of dimensions size * size. Print a Print W for white spaces and B for black
spaces.*/

#include <stdio.h>
int main()
{
	int n, size, i, j, count;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &size);
		count = 0;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			if (count++ % 2 == 1)
				printf("B");
			else
				printf("W");
			}
			if (size % 2 == 0)
				count++;
			printf("\n");
		}
	}
	return 0;
}