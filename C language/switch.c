/*

A number from 1 to 3 will be passed as input. Fill in the code within the switch statement so that the program prints the following.

apple when 1 is entered
ball when 2 is entered
cat when 3 is entered

*/



#include <stdio.h>    

int main() {
    int menuitem;
    scanf("%d",&menuitem);
   
    switch(menuitem){
        case 1:
            printf("apple");  
            break;
        case 2:
            printf("ball");  
            break;
        case 3:
            printf("cat");
            break;
    }
    return 0;
}