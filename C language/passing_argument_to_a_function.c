/*


The program tries to print the square of the number passed as input.

But there is error in the logic and the program prints only the number as such instead of it's square.
Modify the code so as to run the program successfully.

*/



#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    square(&number);
    printf("%d",number);
    return 0;
}

void square(int* number){
    *number = *number * *number;
}