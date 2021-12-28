/*

Fill in the missing lines of code within the function printTotalSeats so that the program prints the total number of seats considering all departments.

*/



#include <stdio.h>

struct Department
{
    char name[50];
    int seats;
};

int main()
{
    struct Department departments[] = {{"CSE",50},{"CSE",100},{"CSE",75}};
    printTotalSeats(departments,3);

    return 0;
}

int printTotalSeats(struct Department *ptr, int ARRAY_SIZE){

    int counter=1;
    int totalSeats=0;

    while(counter <= ARRAY_SIZE){
        totalSeats += ptr->seats;
        counter++;
        ptr++;
    }

    printf("%d",totalSeats);
}