/*Decode the logic and print the Pattern that corresponds to given input.
If N= 3
then pattern will be :
10203010011012
**4050809
****607
If N= 4, then pattern will be:
1020304017018019020
**50607014015016
****809012013
******10011

Input Format
First line contains T, the number of test cases
Each test case contains a single integer N

Output
First line print Case #i where i is the test case number
In the subsequent line, print the pattern*/

#include <stdio.h>
int main()
{
	int n, row, col, opprow, oppnum, t, counter = 0, num;
	int i, s;
	scanf("%d", &t);
	while(t--)
	{
		s = 0;
		scanf("%d", &n);
		num = 1;
		opprow = n * n + 1;
		printf("Case #%d\n", ++counter);
		for(row = n; row >= 1; row--, opprow = opprow - row)
		{
			for (i = 0; i < s; i++)
				printf("**");
			s++;
			for (col = 1; col <= row; col++)
				printf("%d0", num++);
			oppnum = opprow;
			for (col = 1; col < row; col++)
				printf("%d0", oppnum++);
			printf("%d\n", oppnum++);
		}
	}
	return 0;
}
