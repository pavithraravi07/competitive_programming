/*The number of goals achieved by two football teams in matches in a league is given in the form
of two lists. Consider:
• Football team A, has played three matches, and has scored { 1 , 2 , 3 } goals in each match
respectively.
• Football team B, has played two matches, and has scored { 2, 4 } goals in each match
respectively.
• Your task is to compute, for each match of team B, the total number of matches of team A,
where team A has scored less than or equal to the number of goals scored by team B in that
match.
• In the above case:
• For 2 goals scored by team B in its first match, team A has 2 matches with scores 1 and 2.
• For 4 goals scored by team B in its second match, team A has 3 matches with scores 1, 2 and
3.
Hence, the answer: {2, 3}.

Complete the code in the editor below. The program must return an array of m positive integers,
one for each maxes[i] representing the total number of elements nums[j] satisfying nums[j] ≤
maxes[i] where 0 ≤ j < n and 0 ≤ i < m, in the given order.
It has the following:
nums[nums[0],...nums[n-1]]: first array of positive integers
maxes[maxes[0],...maxes[n-1]]: second array of positive integers*/

#include <stdio.h>
int main()
{
long maxes[100], nums[100], n, m, sum[100], j, i, count=0;
scanf("%ld", &n);
for (i = 0; i < n; i++)
scanf("%ld", &nums[i]);
scanf("%ld", &m);
for (j = 0; j < m; j++)
scanf("%ld", &maxes[j]);
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
{
if (nums[j] <= maxes[i])
count+ +;

}
sum[i] = count;
count = 0;
}
for (i = 0; i < m; i++)
printf("%ld\n", sum[i]);
return 0;
}
