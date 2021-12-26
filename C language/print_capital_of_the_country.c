/*

The program below accepts names of countries and capitals upto the value of SIZE (here it is 5). Then the program must print the capital for a given country name.

To compare two strings you must use strcmp function passing two string values and check if the return value is 0.
To check if two string variables a,b are equal use the code  if(strcmp(a,b)==0)

*/


#include <stdio.h>
#include <string.h>

#define SIZE 5

struct Country
{
    char name[50];
    char capital[50];
};

int main()
{
    struct Country countries[SIZE];

    //Accept input values
    int index=0;
    while(index < SIZE)
    {
        scanf("%s\n%s\n", countries[index].name, countries[index].capital);
        index++;
    }

    char inputCountryName[50];
    scanf("%s", inputCountryName);

    index=0;
    while(index < SIZE)
    {
        if(strcmp(inputCountryName,countries[index].name) == 0)
        {
            printf("%s", countries[index].capital);
            return 0; /*As the country capital is found and printed exit the method*/
        }
        index++;

    }//end of while loop

    return 0;
}