/*

Fill in the code within the main function to declare the variable data types as below.

- Declare longnumber as unsigned long int
- Declare number as int
- Declare smallnumber as unsigned short int

*/


#include <stdio.h>

int main()
{
    unsigned long int longnumber;
    int number;
    short int smallnumber;


    longnumber = 3234567899LU;
    number = 555;
    smallnumber=65534;
    //Now print the numbers
    printf("%lu",longnumber);
    printf("%d",number);
    printf("%hu",smallnumber);
    return 0;
}