/*A nutritionist is labeling all the best power foods in the market. Every food item arranged in a
single line, will have a value beginning from 1 and increasing by 1 for each, until all items have
a value associated with them. An item's value is the same as the number of macronutrients it
has. For example, food item with value 1 has 1 macronutrient, food item with value 2 has 2
macronutrients, and incrementing in this fashion.
The nutritionist has to recommend the best combination to patients, i.e. maximum total of
macronutrients. However, the nutritionist must avoid prescribing a particular sum of
macronutrients (an 'unhealthy' number), and this sum is known. The nutritionist chooses food
items in the increasing order of their value. Compute the highest total of macronutrients that
can be prescribed to a patient, without the sum matching the given 'unhealthy' number.
n
Here's an illustration:
Given 4 food items (hence value: 1,2,3 and 4), and the unhealthy sum being 6 macronutrients,
on choosing items 1, 2, 3 -> the sum is 6, which matches the 'unhealthy' sum. Hence, one of the
three needs to be skipped. Thus, the best combination is from among:
• 2 + 3 + 4 = 9
• 1 + 3 + 4 = 8
• 1 + 2 + 4 = 7
Since 2 + 3 + 4 = 9, allows for maximum number of macronutrients, 9 is the right answer.
Complete the code in the editor below. It must return an integer that represents the maximum
total of macronutrients, modulo 1000000007 (109 + 7).
It has the following:
n: an integer that denotes the number of food items
k: an integer that denotes the unhealthy number
Constraints
• 1 ≤ n ≤ 2 × 109
• 1 ≤ k ≤ 4 × 1015*/

#include <stdio.h>
int main() {
	long long int n, k, i, nut = 0;
	scanf("%lld %lld", &n, &k);
	for (i = 1; i <= n; i++)
	{
		nut = nut + i;
		if (nut == k)
			nut = nut - 1;
	}
	printf("%lld", nut % 1000000007);
	return 0;
}
