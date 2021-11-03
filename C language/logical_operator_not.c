/*

Two numbers are passed as input. Check if both the numbers are zero and if yes print bothzero as output. Else do not print anything to output.

*/


#include <stdio.h>    

int main() {
    int firstnum,secondnum;
    scanf("%d", &firstnum);
    scanf("%d", &secondnum);

    if(!firstnum && !secondnum){
        printf("bothzero");
    }
    return 0;
}
