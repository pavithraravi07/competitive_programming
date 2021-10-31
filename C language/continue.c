/*

The below program accepts two numbers to indicate a range (inclusive of the numbers) and prints the numbers within the range. Modify the program by inserting continue statement so that it prints only odd numbers within the range.

Example:
- If the input numbers are 11 and 18, then the output of the program is 11 13 15 17
- If the input numbers are 35 and 40, then the output of the program is 35 37 39

*/




#include <stdio.h>    

int main() {
    int from,to;
    scanf("%d",&from);
    scanf("%d",&to);
    
    int currentvalue=from;
    for(;currentvalue <= to;currentvalue++){
        if(currentvalue%2 == 0){
            //Skip printing as it is an even value.
            continue;
        }
        
        printf("%d ",currentvalue);
    }
    return 0;
}