/*
Task
Given a five digit integer, print the sum of its digits.

Input Format
The input contains a single five digit number, n.

Constraints
10000<=n<=99999

Output Format
Print the sum of the digits of the five digit number.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n>0){
        sum += (n%10);
        n=n/10;
    }
    printf("%d\n", sum);
    return 0;
}
