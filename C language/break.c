/*

The program below prints from 1 to 10. Modify the program by inserting a break statement so that it prints only from 1 to 5.

*/


#include <stdio.h>    

int main() {
    int number=1;
    
    while(number <=10){
        printf("%d ",number);
        if(number==5){
            break;
        }
        number++;
    }
  
    return 0;
}