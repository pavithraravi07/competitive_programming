/*

Fill in the below code so that the program calculates and prints the products of all elements in the int array numbers.

*/


#include <stdio.h>    

int main() {  
    int numbers[5]={10,20,2,5,4};
    //We initialize to 1 as we are multiplying. Default value 0 will lead to the product being zero.
    int product=1;
    
    //We set counter as zero as the element position starts from zero
    int counter=0; 
    for(;counter < 5; counter++){
        product*=numbers[counter];
    }
    
    printf("%d",product);
    return 0;
}