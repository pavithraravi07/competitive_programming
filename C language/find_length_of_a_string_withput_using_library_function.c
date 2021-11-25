/*

The program below accepts two string values as input. The strings will be of different length. The program must print the value of the smaller string value.
Fill in the missing lines of code so that the program performs the above logic.
Example Input/Output:
- If the input values are king & queen the output is king
- If the input values are Maharashtra & Goa the output is Goa

*/



#include <stdio.h>
#include <string.h>

int main()
{
    char first[100],second[100];
    fgets(first,100,stdin);
    fgets(second,100,stdin);

    int firstStringLength=0, secondStringLength=0;

    while(first[firstStringLength] != '\0')
    {
        firstStringLength++;
    }

    while(second[secondStringLength] != '\0')
    {
        secondStringLength++;
    }

    if(firstStringLength < secondStringLength)
    {
        printf("%s", first);
    }
    else
    {
        printf("%s", second);
    }

    return 0;
}