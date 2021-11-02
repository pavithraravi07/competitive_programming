/*
A machine will give a token with number 1 or 5 in it if it is monday.
It will give a token with number 2 or 4 in it if it is wednesday.
It will give a token with number 3 or 6 in it if it is thursday.
Fill in the code below so that the program prints the related day (valid output values are monday, wednesday, thursday) when the token number is passed as input.

*/

#include <stdio.h>    

int main() {
    int tokennumber;
    scanf("%d", &tokennumber);

    if (tokennumber == 1 || tokennumber == 5) {
        printf("monday");
    } else
        if (tokennumber == 2 || tokennumber == 4) {
        printf("wednesday");
    } else
        if (tokennumber == 3 || tokennumber == 6) {
        printf("thursday");
    }

    return 0;
}