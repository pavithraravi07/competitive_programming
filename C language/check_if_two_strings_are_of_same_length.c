/*

Two string values are passed and accepted as input to the program. Fill in the missing lines of code so that the program prints
- yes if both strings are of same length
- no if the strings are of different length

Example Input/Output 1:
Input:
India
Nepal

Output:
yes

Explanation:
Here, the length of the two string values is 5. So yes is printed as the output.

Example Input/Output 2:
Input:
Killer
Gentleman

Output:
no

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    
    int len1=0, len2=0;
    
    while(s1[len1] != '\n' && s1[len1] != '\r'){
        len1++;
    }
    
    while(s2[len2] != '\n'  && s2[len2] != '\r'){
        len2++;
    }
  
    if(len1 == len2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}