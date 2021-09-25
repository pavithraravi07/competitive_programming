/*
In the below program, students is a 3*2 two dimensional Array. 
The Array stores the height and weight of three students in the same order.
Fill in the missing lines of code to print the sum of height followed by the sum of weight of all three students.
*/



#include <stdio.h>
void printSumOfHeightAndWeight(int *ptr);

int main()
{
    int students[3][2];
    int *ptr = students;

    int counter=1;
    while(counter <= 6)
    {
        //As it is a pointer no & address of operator is required.
        scanf("%d",ptr);
        counter++;
        ptr++;
    }
    printSumOfHeightAndWeight(students);
    return 0;
}

void printSumOfHeightAndWeight(int *ptr)
{
    int sumOfHeight = 0;
    int sumOfWeight = 0;
    int counter=1;
    while(counter <= 3)
    {
        sumOfHeight+=*ptr;
        ptr++; //Now point to weight
        sumOfWeight += *ptr;
        ptr++;
        counter++;
    }

    printf("%d %d",sumOfHeight,sumOfWeight);

}