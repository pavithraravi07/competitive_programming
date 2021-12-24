/*


Fill in the missing lines of code to define the function printHorsePower to print the bhp of the engine.

Note: As the address of the struct instance engine is passed, the parameter of the function printHorsePower will be a pointer to struct Engine.

Also use -> to refer member variables using a pointer.


*/




#include <stdio.h>

struct Engine
{
    int bhp;
};

int main()
{
    struct Engine engine;
    scanf("%d",&engine.bhp);
    printHorsePower(&engine);
    return 0;
}

int printHorsePower(struct Engine *ptr)
{
    printf("%d",ptr->bhp);
}