/*Alice and Bob are playing a game called "Stone Game". Stone game is a two-player game. Let N
be the total number of stones. In each turn, a player can remove either one stone or four stones.
The player who picks the last stone, wins. They follow the "Ladies First" norm. Hence Alice is
always the one to make the first move. Your task is to find out whether Alice can win, if both
play the game optimally.
Input Format
First line starts with T, which is the number of test cases. Each test case will contain N number
of stones.

Output Format
Print "Yes" in the case Alice wins, else print "No".*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, num, four, one, total;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &num);
		four = num / 4;
		one = num % 4;
		total = four + one;
		if (total % 2 == 1)
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}
