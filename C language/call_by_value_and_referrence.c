/*

Fill in the missing lines of code so that the method changeValue adds 10 to the current value of the variable marks.

Example Input/Output:
- If the input value is 500 the output must be 510

- If the input value is 912 the output must be 922

*/



#include <stdio.h>

void changeValue(int *ptr)
{
    *ptr = *ptr+10;
}

int main()
{
    int marks;
    scanf("%d",&marks);
    changeValue(&marks);
    printf("%d",marks);
    return 0;
}