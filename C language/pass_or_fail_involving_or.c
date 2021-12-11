/*

There is a meeting organized by a secret society. The password is any number which is divisible by either x or y or both. The values of x,y changes every week. Tom who is a member of a secret society wants to write a program which will verify the password and print accept or reject after checking for the divisibility of the password by x and y.

Help Tom by completing the program below as per the given conditions.

Hint: Use || operator.

Example Input/Output:
If the input for x,y is 20,30 and the input for password is 60, then the output is accept as 60 is divisible by 20 as well as 30.
If the input for x,y is 30,50 and the input for password is 90, then the output is accept as 90 is divisible by 30.
If the input for x,y is 10,25 and the input for password is 35, then the output is reject as 35 is NOT divisible by 10 or 25.

*/



#include <stdio.h>

int main()
{
    int x,y,password;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&password);

    //Logic below to check for the valid password.
    if(password%x==0 || password%y==0)
    {
        printf("accept");
    }
    else
    {
        printf("reject");
    }

    return 0;
}