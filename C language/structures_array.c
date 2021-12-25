/*


Fill in the missing lines of code to within the function printSumOfAges to print the sum of the ages of the instances of structure Cat using the pointer to struct Array.


*/



#include <stdio.h>

#define CATSIZE 5

struct Cat
{
    int age;
};

int main()
{
    struct Cat cats[CATSIZE]; //5 cats

    int index=0;
    while(index < CATSIZE)
    {
        scanf("%d",&cats[index].age);
        index++;
    }

    printSumOfAges(cats);

    return 0;
}

int printSumOfAges(struct Cat *ptr)
{
    int sumOfAges=0;
    int index=0;
    while(index < CATSIZE)
    {
        sumOfAges += ptr->age;
        index++;
        ptr++;
    }//end of while loop

    printf("%d",sumOfAges);
}