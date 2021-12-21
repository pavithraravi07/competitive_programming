/*

Fill in the missing lines of code to define the function to accept an instance of struct WeeklyExpense and print the sum of expense on the weekend (Saturday and Sunday).

*/


#include <stdio.h>

struct WeeklyExpense
{
    int sunday,monday,tuesday,wednesday,thursday,friday,saturday;
};

int main()
{
    struct WeeklyExpense we;
    scanf("%d%d%d%d%d%d%d",&we.sunday,&we.monday,&we.tuesday,&we.wednesday,&we.thursday,&we.friday,&we.saturday);
    printWeekEndExpense(we);
    return 0;
}

int printWeekEndExpense(struct WeeklyExpense weeklyExpense)
{
    printf("%d",weeklyExpense.saturday+weeklyExpense.sunday);
}