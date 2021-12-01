/*

In the program below the output should be as per the following conditions.

- The program prints yes if the first character (letter) is a vowel
- The program prints no if the first character (letter) is not a vowel
But the programmer forgot to check for upper case (CAPITAL letters). Hence please modify the program to include upper case letters of vowels - A E I O U


*/



#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    fgets(name,100,stdin);

    char first = name[0];
    if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u' || first == 'A' || first == 'E' || first == 'I' || first == 'O' || first == 'U')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}