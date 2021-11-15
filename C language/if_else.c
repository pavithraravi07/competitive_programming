/*

Fill in the code so that the below program prints yes if the input number is greater than 999. Else the program prints no.



*/


#include <stdio.h>
    
int main()
{
    int number;
    scanf("%d",&number);
    
    if(number > 999){
        printf("yes");
    }else{
        printf("no");
    }
    
    return 0;
}