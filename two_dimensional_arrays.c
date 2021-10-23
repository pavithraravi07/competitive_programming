/*

Five students are in a class and their scores in maths, physics and chemistry exams have been announced.
The Array marks in the program below is declared as a two dimensional Array to hold their scores (in the order of maths, physics and chemistry).
Fill in the missing code to print the score of the fourth student in the physics exam.

Hint: The index starts from 0. So for the fourth student the first index will be 3.
Physics is the second exam. Hence the second index will be 1.


*/




#include <stdio.h>

#define STUDENT_COUNT 5
#define SUBJECT_COUNT 3

int main()
{
    int marks[STUDENT_COUNT][SUBJECT_COUNT];

    int index=0;
    while(index < STUDENT_COUNT){
        int subindex=0;
        while(subindex < SUBJECT_COUNT){
            scanf("%d",&marks[index][subindex]);
            subindex++;
        }
        index++;
    }

    //Now code to print the fourth student physics mark.
    printf("%d",marks[3][1]);

    return 0;
}