/*
Two integer values will be passed as input to the program. The program should assign these values to the address pointed by ptr1 and ptr2. Finally the program prints the sum of two integer values.

Example Input/Output:
- If the input values are 100 and 200 the output is 300
- If the input values are 120 and 1200 the output is 1320

Note: Remember NOT to use address of operator & in scanf as pointer itself contains address.
*/



#include <stdio.h>

int main()
{
    int *ptr1 = malloc( sizeof(int));
    int *ptr2 = malloc( sizeof(int));

    scanf("%d", ptr1);
    scanf("%d", ptr2);

    printf("%d",*ptr1+*ptr2);
    return 0;
}