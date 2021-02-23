/*Joey loves to eat Pizza. But he is worried as the quality of pizza made by most of the restaurants
is deteriorating. The last few pizzas ordered by him did not taste good :(. Joey is feeling
extremely hungry and wants to eat pizza. But he is confused about the restaurant from where
he should order. As always he asks Chandler for help.
Chandler suggests that Joey should give each restaurant some points, and then choose the
restaurant having maximum points. If more than one restaurant has same points, Joey can
choose the one with lexicographically smallest name.
Joey has assigned points to all the restaurants, but can't figure out which restaurant satisfies
Chandler's criteria. Can you help him out?

Input:
First line has N, the total number of restaurants.
Next N lines contain Name of Restaurant and Points awarded by Joey, separated by a space.
Restaurant name has no spaces, all lowercase letters and will not be more than 20 characters.

Output:
Print the name of the restaurant that Joey should choose.

Constraints:
1 <= N <= 105
1 <= Points <= 106*/

#include <stdio.h>
#include <string.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	long long int p, p1;
	char s[20], s1[20];
	scanf("%s %d", s, &p);
	for (i = 0; i < n - 1; i++)
	{
		scanf("%s %d", s1, &p1);
		if (p < p1)
		{
			p = p1;
			strcpy(s, s1);
		}
		if (p == p1)
		{
			p = p1;
			if (strcmp(s, s1) > 0)
			strcpy(s, s1);

		}
	}
	printf("%s", s);
	return 0;
}
