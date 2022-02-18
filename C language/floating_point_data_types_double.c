/*

Jitin goes to a coffee shop and always orders a coffee and a samosa. The prices of the coffee and samosa are dynamic and hence varies on a daily basis. So Jitin wants to write a program to calculate the sum he has to pay.

The program must accept the price of coffee and samosa, add them and print the sum as output with the precision upto two decimal places. Help Jitin by completing the missing code.

*/


#include <stdio.h>

int main()
{
    double coffee_price, samosa_price;
    scanf("%lf",&coffee_price);
    scanf("%lf",&samosa_price);
    printf("%.2lf",coffee_price+samosa_price);
    return 0;
}