/*You are designing a poster which prints out numbers with a unique style applied to each of
them. The styling is based on the number of closed paths or holes present in a given number.
The number of holes that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
1, 2, 3, 5, and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.
8 = 2 holes.
Given a number, you must determine the sum of the number of holes for all of its digits. For
example, the number 819 has 3 holes.
Complete the program, it must must return an integer denoting the total number of holes in
num.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int n,m,count=0;
scanf("%d",&n);
while(n>0){
        m=n%10;
        if(m==4 || m==6 || m==9 || m==0)
            count++;
        if(m==8)
            count+=2;
        n=n/10;
}
    printf("%d",count);
