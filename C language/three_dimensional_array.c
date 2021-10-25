/*

In the program given below, the 3-D int Array schoolmarks holds the data for 4 schools, 3 classes and 2 semesters.

Fill in the missing lines of code so that the program will print the average marks of class 3 of 2nd school for first semester.

*/




#include<stdio.h>
void main()
{
   int schoolmarks[4][3][2];
   int schoolcount=4, classcount=3, semestercount=2;
   int x,y,z;
   for(x=0;x<schoolcount;x++){
    for(y=0;y<classcount;y++){
        for(z=0;z<semestercount;z++){
         scanf("%d",&schoolmarks[x][y][z])   ;
        }
    }
   }

   //Print the average marks of class 3 of 2nd school for first semester below.
   printf("%d",schoolmarks[1][2][0]);
}

