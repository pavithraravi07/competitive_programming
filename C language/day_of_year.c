/*Some data sets specify dates using the year and day of year rather than the year, month, and
day of month. The day of year (DOY) is the sequential day number starting with day 1 on
January 1st.

There are two calendars - one for normal years with 365 days, and one for leap years with 366
days. Leap years are divisible by 4. Centuries, like 1900, are not leap years unless they are
divisible by 400. So, 2000 was a leap year.

To find the day of year number for a standard date, scan down the Jan column to find the day of
month, then scan across to the appropriate month column and read the day of year number.
Reverse the process to find the standard date for a given day of year.
Write a program to print the Day of Year of a given date, month and year.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, mon, year, days_in_feb = 28,doy;
    scanf("%d %d %d", &day, &mon, &year);
    doy = day;
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        days_in_feb = 29;
    }
 
    switch(mon)
    {
        case 2:
            doy += 31;
            break;
        case 3:
            doy += 31+days_in_feb;
            break;
        case 4:
            doy += 31+days_in_feb+31;
            break;
        case 5:
            doy += 31+days_in_feb+31+30;
            break;
        case 6:
            doy += 31+days_in_feb+31+30+31;
            break;
        case 7:
            doy += 31+days_in_feb+31+30+31+30;
            break;            
        case 8:
            doy += 31+days_in_feb+31+30+31+30+31;
            break;
        case 9:
            doy += 31+days_in_feb+31+30+31+30+31+31;
            break;
        case 10:
            doy += 31+days_in_feb+31+30+31+30+31+31+30;            
            break;            
        case 11:
            doy += 31+days_in_feb+31+30+31+30+31+31+30+31;            
            break;                        
        case 12:
            doy += 31+days_in_feb+31+30+31+30+31+31+30+31+30;            
            break;                                    
    }
    
    printf("%d", doy);
    
    return 0;
}