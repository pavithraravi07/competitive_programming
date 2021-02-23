/*These days Bechan Chacha is depressed because his crush gave him list of mobile number some
of them are valid and some of them are invalid. Bechan Chacha has special power that he can
pick his crush number only if he has valid set of mobile numbers. Help him to determine the
valid numbers.
You are given a string "S" and you have to determine whether it is Valid mobile number or not.
Mobile number is valid only if it is of length 10 , consists of numeric values and it shouldn't have
prefix zeroes.

Input:
First line of input is T representing total number of test cases.
Next T line each representing "S" as described in in problem statement.

Output:
Print "YES" if it is valid mobile number else print "NO".
Note: Quotes are for clarity.*/

#include <stdio.h>
#include <string.h>
int main()
{
	int t, i, j, a = 0;
	scanf("%d", &t);
	char s[t][15];
	for (i = 0; i < t; i++)
	{
		scanf("%s", s[i]);
		if (strlen(s[i]) < 10 || strlen(s[i]) > 10)
		{
			a++;
		}
		else
		{
			for (j = 0; j < 10; j++)
			{
				if (s[i][j] < 48 || s[i][j] > 57 || s[i][0] == 48)
					a++;

			}
		}
		if (a == 0)
			printf("YES\n");
		else
			printf("NO\n");
		a = 0;
	}
	return 0;
}
