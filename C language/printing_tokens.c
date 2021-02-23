/*Given a sentence, s, print each word of the sentence in a new line.

Input Format
The first and only line contains a sentence, s.

Constraints
1 ≤ len(s) ≤ 1000

Output Format
Print each word of the sentence in a new line.*/

#include <stdio.h>
int main()
{
	char s[1024];
	int i, len;
	scanf("%[^\n]", s);
	for(i = 0; s[i] != '\0'; i++);
		len = i;
	for(i = 0; i < len; i++)
	{
		if (s[i] == ' ')
			printf("\n");
		else
			printf("%c", s[i]);
	}
	return 0;
}
