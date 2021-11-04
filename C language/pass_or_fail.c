/*

In a college a test is conducted to assess the employability skills of the candidates. The maximum marks that can obtained in the test is 200.
- A student is considered to have passed the exam if he scored greater than or equal to 100.

Fill in the missing lines of code so that the program below prints as per the following conditions.

Conditions:
 - The program must print pass if the input value of marks is from 100 to 200.
 - The program must print fail if the input value of marks is from 0 to 99.
 - The program must print invalidinput if the input value of marks is less than zero or greater than 200.

 */



 #include <stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks >= 100 && marks <=200)
    {
        printf("pass");
    }
    else if(marks >=0 && marks <=99)
    {
        printf("fail");
    }
    else
    {
        printf("invalidinput");
    }

    return 0;
}