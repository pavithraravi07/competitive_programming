/*

Karan works in a bank where he needs to provide 1% additional interest if a person is a senior citizen. A senior citizen is a person whose age is greater than or equal to 60. So Karan writes the below program to accept and store the value of age. Please help Karan in completing the program by inserting the missing lines of code so that the program fulfills the following conditions.

- The program prints yes if the age is greater than or equal to 60.
- The program prints no if the age is less than 60.

*/


#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);

    if(age >= 60)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}