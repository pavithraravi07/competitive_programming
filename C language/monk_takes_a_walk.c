/*Today, Monk went for a walk in a garden. There are many trees in the garden and each tree has
an English alphabet on it. While Monk was walking, he noticed that all trees with vowels on it
are not in good state. He decided to take care of them. So, he asked you to tell him the count of
such trees in the garden.

Note: The following letters are vowels: 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o' and 'u'.

Input:
The first line consists of an integer T denoting the number of test cases.
Each test case consists of only one string, each character of string denoting the alphabet (may
be lowercase or uppercase) on a tree in the garden.

Output:
For each test case, print the count in a new line.*/

#include <stdio.h>
int main()
{
	int t, len, i, j, count;
	char str[100000];
	scanf("%d", &t);
	while(t--)
	{	
		count=0;
		scanf("%s", str);
		for(i = 0; str[i] != '\0'; i++){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
				count++;
			}
		}
		printf("%d\n", count);
	}
return 0;
}