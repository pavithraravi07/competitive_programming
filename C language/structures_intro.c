/*

Fill in the missing lines of code to define a structure called Student having the following member variables
- name which is a string
- college which is a string.

The program accepts the name of the student and the name of the college and prints them as output.

*/



#include <stdio.h>

struct Student
{
    char name[50];
    char college[50];
};

int main()
{
    struct Student student;
    scanf("%s\n%s", student.name, student.college);

    printf("The student name is %s and he studies in %s",student.name,student.college);
    return 0;
}