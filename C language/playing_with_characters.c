/*
Task

You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.

Input Format

First, take a character, ch as input.
Then take the string, s as input.
Lastly, take the sentence sen as input.

Constraints

Strings for s and sen will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, ch.
The second line prints the string, s.
The third line prints the sentence, sen.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int BUFFSIZE = 256;
    
    char c;
    char str[BUFFSIZE];
    char sen[BUFFSIZE];
    
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, BUFFSIZE, stdin);
    
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    
    return 0;
}
