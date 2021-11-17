/*


A number greater than zero and less than 9999999 will be passed as input.
Fill in the code so that the program prints even if the input number is even. Else it prints odd.

Information:
A number is even if it is divisible by 2.



*/



#include <stdio.h>
    
int main()
{
    int number;
    scanf("%d",&number);
    
    if(number%2 == 0){
        printf("even");
    }else{
        printf("odd");
    }
    
    return 0;
}
 