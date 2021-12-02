/*

The below program accepts a String as input. 
The program must print big if the length of the String is more than 10. 
Else it should print small.
Fill in the code below to accomplish the same.

*/



#include <stdio.h>    
#include <string.h>  
int main() {
    char input[100];
    fgets(input,100,stdin);
    if(strlen(input) > 10){
        printf("big");
    }else{
        printf("small");
    }
    return 0;
}