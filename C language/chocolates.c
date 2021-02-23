/*Sam loves chocolates and starts buying them on the 1st day of the year. Each day of the year, x,
is numbered from 1 to Y. On days when x is odd, Sam will buy x chocolates; on days when x is
even, Sam will not purchase any chocolates.
Complete the code in the editor so that for each day Ni (where 1 ≤ x ≤ N ≤ Y) in array arr, the
number of chocolates Sam purchased (during days 1 through N) is printed on a new line. This
is a function-only challenge, so input is handled for you by the locked stub code in the editor.

Input Format
The program takes an array of integers as a parameter.
The locked code in the editor handles reading the following input from stdin, assembling it into
an array of integers (arr), and calling calculate(arr).
The first line of input contains an integer, T (the number of test cases). Each line i of
the T subsequent lines describes the i th test case as an integer, Ni (the number of days).

Output Format
For each test case, Ti in arr, your calculate method should print the total number of chocolates
Sam purchased by day Ni on a new line.*/

#include <stdio.h>
int main()
{
int test, count, i, j, k;
scanf("%d", &test);
for (i = 0; i < test; i++)
{
count = 0;
scanf("%d", &j);
for (k = 1; k <= j; k += 2)
count = count + k;
printf("%d\n", count);
}
return 0;
}
