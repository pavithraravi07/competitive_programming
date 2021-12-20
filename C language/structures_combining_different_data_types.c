/*

Fill in the missing lines of code to define a structure called Marks having the following member variables
- maths which is an int
- chemistry which is an int
- physics which is an int
The program accepts the input valus for marks in maths, chemistry and physics and prints the sum of these three marks as output.

Example Input/Output:
- If the input values are 50,40,30 the output is 120

*/



#include <stdio.h>

struct Marks
{
    int maths;
    int chemistry;
    int physics;
};

int main()
{
    struct Marks m;

    scanf("%d%d%d",&m.maths,&m.chemistry,&m.physics);
    printf("%d",m.maths+m.chemistry+m.physics);

    return 0;
}