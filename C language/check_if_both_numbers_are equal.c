/*


Fill in the missing lines of code so that the program compares the two input numbers and 
prints equal if they are same. Else the program prints notequal.


*/





#include <stdio.h>

int main()
{
    int number1, number2;
    scanf("%d%d",&number1,&number2);

    if(number1 == number2)
    {
        printf("equal");
    }
    else
    {
        printf("notequal");
    }

    return 0;
}