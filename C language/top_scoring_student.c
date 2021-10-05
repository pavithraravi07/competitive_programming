/*
Please fill in the missing lines of code to implement the logic given below.

The marks of students in a given class in Maths and Physics are passed as input. The program must print the total marks (Maths + Physics) of the top scoring student.

Input Format:
- The first line will contain the value of N which denotes the number of students.
- The next 2N lines will contain the marks of the students with Maths marks followed by Physics marks.

Example Input/Output:
Input:
4
50
20
60
5
45
40
35
60

Output:
95

Explanation:
4 indicates the number of students.
So Maths and Physics marks of student #1 is 50 and 20, #2 is 60 and 5, #3 is 45 and 40 and #4 is 35 and 60.
The 4th student's total 35+60 = 95 is the highest and hence printed as output.
*/



#include <stdio.h>

void main()
{
    int N;
    scanf("%d",&N);

    int marks[N][2];
    int studentCounter;
    for(studentCounter=0; studentCounter<N; studentCounter++)
    {
        scanf("%d",&marks[studentCounter][0]); //Accept Maths marks
        scanf("%d",&marks[studentCounter][1]); //Accept Physics marks
    }
    int maxTotalMarks = 0;
    int totalMarks;
    for(studentCounter=0; studentCounter<N; studentCounter++)
    {
        totalMarks = marks[studentCounter][0] + marks[studentCounter][1];
        if(maxTotalMarks < totalMarks)
        {
            maxTotalMarks = totalMarks;
        }
    }
    printf("%d", maxTotalMarks);

}//end of main method