/*

The marks scored by a student in maths and chemistry is passed as input. Complete the program below which will print pass or fail considering the data provided below.

A student is considered to have passed if all of the below conditions are satisfied.
- Maths marks is more than or equal to 50
- Chemistry marks is more than or equal to 40
- Sum of both Maths and Chemistry marks is more than or equal to  100.
The program must print pass or fail based on the above conditions.

*/


#include <stdio.h>

int main()
{

    int maths,chemistry;
    scanf("%d",&maths);
    scanf("%d",&chemistry);

    if(maths >= 50 && chemistry >= 40 && (maths+chemistry) >= 100)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}