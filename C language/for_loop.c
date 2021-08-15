/*
Task

For each integer  in the interval [a,b](given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Input Format

The first line contains an integer, a.
The seond line contains an integer, b.

Constraints
1<=a<=b<=10^6

Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char eng_rep[11][6] = {"one", "two", "three", "four", "five", "six", "seven",                                   "eight", "nine", "even", "odd"};
    int index;
      for (int i=a; i<=b; i++) {
        index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", eng_rep[index]);
    }
    return 0;
}

