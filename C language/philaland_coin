/*The problem solvers have found a new Island for coding and named it as Philaland. These smart
people were given a task to make a purchase of items at the Island easier by distributing various
coins with different values. Manish has come up with a solution that if we make coins category
starting from $1 till the maximum price of the item present on Island, then we can purchase any
item easily. He added the following example to prove his point.
Let’s suppose the maximum price of an item is 5$ then we can make coins of {$1, $2, $3, $4,
$5}to purchase any item ranging from $1 till $5.
Now Manisha, being a keen observer suggested that we could actually minimize the number of
coins required and gave following distribution {$1, $2, $3}. According to him any item can be
purchased one time ranging from $1 to $5. Everyone was impressed with both of them. Your
task is to help Manisha come up with a minimum number of denominations for any arbitrary
max price in Philaland.

Input Format
Contains an integer N denoting the maximum price of the item present on Philaland.

Output Format
Print a single line denoting the minimum number of denominations of coins required.*/

#include <stdio.h>
int main()
{
	int total, count = 0;
	scanf("%d", &total);
	while (total != 0)
	{
		count++;
		total = total / 2;
	}
	printf("%d", count);
	return 0;
}
