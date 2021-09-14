/*
The program below uses some functions in the system header file math.h
So please include the header file math.h so that the program runs successfully.
*/



#include <stdio.h>
#include <math.h>

void main()
{
   float a,b;
   scanf("%f",&a);
   scanf("%f",&b);
   printf("%.2lf",pow(a,b));
}