/*Danny has a possible list of passwords of Manny's facebook account. All passwords length is
odd. But Danny knows that Manny is a big fan of palindromes. So, his password and reverse of
his password both should be in the list.
You have to print the length of Manny's password and it's middle character.

Note: The solution will be unique.

INPUT
The first line of input contains the integer N, the number of possible passwords.
Each of the following N lines contains a single word, its length being an odd number greater
than 2 and lesser than 14. All characters are lowercase letters of the English alphabet.

OUTPUT
The first and only line of output must contain the length of the correct password and its central
letter.
CONSTRAINTS
1 ≤ N ≤ 100*/

#include <stdio.h>
#include <string.h>
int main()
{
	int n, i, j, l, l1, fg, lf, k, u;
	char s[100][15], ch;
	scanf("%d", &n);
	for(u = 0; u < n; u++) {
		scanf("%s", s[u]);
	}
	for(i = 0; i < n; i++)
	{
		l = strlen(s[i]);
		for(j = i; j < n; j++)
		{
			l1 = strlen(s[j]);
			for(k = 0; k < l && k < l1; k++)
			{
				fg = 0;
				if(s[i][k] != s[j][l1 - 1 - k])
				{
					fg = 1;
					break;
				}
			}
			if (k == l && fg == 0)
			{
				lf = l;
				ch = s[j][lf / 2];
			}
		}
	}
	printf("%d %c", lf, ch);
	return 0;
}