/*Sunny and Johnny like to pool their money and go to the ice cream parlor. Johnny never buys
the same flavor that Sunny does. The only other rule they have is that they spend all of their
money.
Given a list of prices for the flavors of ice cream, select the two that will cost all of the money
they have.
For example, they have m = 6 to spend and there are flavors costing cost = [1, 2, 3, 4, 5, 6]. The
two flavors costing 1 and 5 meet the criteria. 
Using 1-based indexing, they are at indices 1 and 4.
Complete the code in the editor below. It should return an array containing the indices of the
prices of the two flavors they buy, sorted ascending.
It has the following:
• m: an integer denoting the amount of money they have to spend
• cost: an integer array denoting the cost of each flavor of ice cream

Input Format
The first line contains an integer, t, denoting the number of trips to the ice cream parlor. The
next t sets of lines each describe a visit. Each trip is described as follows:
1. The integer m, the amount of money they have pooled.
2. The integer n, the number of flavors offered at the time.
3. n space-separated integers denoting the cost of each flavor: cost[cost[1], cost[2], . . . ,
cost[n]].
Note: The index within the cost array represents the flavor of the ice cream purchased.

Output Format
For each test case, print two space-separated integers denoting the indices of the two flavors
purchased, in ascending order.*/

#include <stdio.h>
int main()
{
int t, c, l, i, j, arr[100];
for (scanf("%d", &t); t > 0; t--)
{
scanf("%d%d", &c, &l);
for (i = 0; i < l; i++)
scanf("%d", &arr[i]);
for (i = 0; i < l - 1; i++)
{
for (j = i + 1; j < l; j++)
{
if (arr[i] + arr[j] == c)
printf("%d %d\n", i + 1, j + 1);

}
}
}
return 0;
}
