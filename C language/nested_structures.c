/*

Fill in the missing lines of code to find the name of the department which has the highest number of seats in a given college.

Example Input/Output:
- If the departments were CSE, ECE and EEE having 200, 250 and 240 seats respectively, the output must be ECE (As ECE has 250 seats which is the highest).

*/


#include <stdio.h>
#include <string.h>

#define DEPT_SIZE 3

struct Department
{
    char name[50];
    int seats;
};

struct College
{
    char name[50];
    struct Department departments[DEPT_SIZE];
};

int main()
{
    struct College college;
    fgets(college.name,50,stdin);

    int index=0;
    while(index < DEPT_SIZE)
    {
        scanf("%s",college.departments[index].name);
        scanf("%d",&college.departments[index].seats);
        index++;
     
    }

    printDepartmentWithHighestSeats(college);

    return 0;
}

int printDepartmentWithHighestSeats(struct College coll)
{
    //Assign the value of first department
    struct Department *deptWithHighestSeats = &coll.departments[0];

    int index=1; //Start from second department
    while(index < DEPT_SIZE)
    {
        if(coll.departments[index].seats > deptWithHighestSeats->seats)
        {
            deptWithHighestSeats = &coll.departments[index];
        }
        index++;
    }//end of while loop

    printf("%s",deptWithHighestSeats->name);

}