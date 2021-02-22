/*Superman is planning a journey to his home planet. It is very important for him to know which
day he arrives there. They don't follow the 7-day week like us. Instead, they follow a 10-day
week with the following days:

Day Number Name of Day
1           Sunday
2           Monday
3           Tuesday
4           Wednesday
5           Thursday
6 	        Friday
7 	        Saturday
8 	        Kryptonday
9 	        Coluday
10 	        Daxamday

Here are the rules of the calendar:
• The calendar starts with Sunday always.
• It has only 296 days. After the 296th day, it goes back to Sunday.
You begin your journey on a Sunday and will reach after n. You have to tell on which day you
will arrive when you reach there.

Input format:
• Contain a number n (0 < n)
Output format:
Print the name of the day you are arriving on*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;
    int a;
    scanf("%d",&day);
    while(day>296) day=day-296;
    
    switch(day%10){
        case 0 : printf("Sunday"); break;
        case 1 : printf("Monday"); break;
        case 2 : printf("Tuesday"); break;
        case 3 : printf("Wednesday"); break;
        case 4 : printf("Thursday"); break;
        case 5 : printf("Friday"); break;
        case 6 : printf("Saturday"); break;
        case 7 : printf("Kryptonday"); break;
        case 8 : printf("Coluday"); break;
        case 9 : printf("Daxamday"); break;
        case 10 : printf("Sunday"); break;
    }
    return 0;
}
