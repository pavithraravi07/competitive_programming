/*Shyam Lal, a wealthy landlord from the state of Rajasthan, being an old fellow and tired of doing
hard work, decided to sell all his farmland and to live rest of his life with that money. No other
farmer is rich enough to buy all his land so he decided to partition the land into rectangular
plots of different sizes with different cost per unit area. So, he sold these plots to the farmers
but made a mistake. Being illiterate, he made partitions that could be overlapping. When the
farmers came to know about it, they ran to him for compensation of extra money they paid to
him. So, he decided to return all the money to the farmers of that land which was overlapping
with other farmer's land to settle down the conflict. All the portion of conflicted land will be
taken back by the landlord.

To decide the total compensation, he has to calculate the total amount of money to return back
to farmers with the same cost they had purchased from him. Suppose, Shyam Lal has a total
land area of 1000 x 1000 equal square blocks where each block is equivalent to a unit square
area which can be represented on the co-ordinate axis. Now find the total amount of money, he
has to return to the farmers. Help Shyam Lal to accomplish this task.

Input Format:
The first line of the input contains an integer N, denoting the total number of land pieces he had
distributed. Next N line contains the 5 space separated integers (X1, Y1), (X2, Y2) to represent
a rectangular piece of land, and cost per unit area C.
(X1, Y1) and (X2, Y2) are the locations of first and last square block on the diagonal of the
rectangular region.

Output Format:
Print the total amount he has to return to farmers to solve the conflict.*/

#include <stdio.h>
#define SIZE 1001
int main()
{
	int i, j;
	int n, x1, x2, y1, y2, cost = 0;
	long long total_cost = 0;
	int arr[SIZE][SIZE] = { 0 };
		//let the 2D Array represents the field of Shyam Lal
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &cost);
		for(i = x1; i <= x2; i++)
		{
			for(j = y1; j <= y2; j++)
			{
				if(arr[i][j] == 0)
					arr[i][j] = arr[i][j] + cost;
				else if(arr[i][j] > 0)
					arr[i][j] = (-1) * (arr[i][j] + cost);
				else if(arr[i][j] < 0)
					arr[i][j] = arr[i][j] - cost;
			}
		}
	}
	for(i = 1; i < SIZE; i++)
	{
		for(j = 1; j < SIZE; j++)
		{
			if(arr[i][j] < 0)
				total_cost = total_cost + arr[i][j];
		}
	}
//Print the absolute value of result(total_cost)
	printf("%lld\n", (-1) * total_cost);
	return 0;
}
