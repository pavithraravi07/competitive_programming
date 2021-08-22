/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format
The first line contains a string, num which is the given number.

Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    char s[1000];
    scanf("%s", s);
    
    int x = strlen(s);
    int i, j, count = 0;
    char num = '0';
    for(i=0; i<=9; i++)
    {
        count = 0;
        for(j=0; j<x; j++)
        {
            if(s[j] == num)
            count++;
        }
        printf("%d ", count);
        num++;
    }
    
    return 0;
}
