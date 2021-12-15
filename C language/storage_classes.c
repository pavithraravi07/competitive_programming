/*

Fill in the missing lines of code to declare the storage scope of the function printCounter so that the program prints 50 52 as the output.

*/



#include <stdio.h>
void printCounter();
int main()
{
    printCounter();
    printCounter();
    return 0;
}

void printCounter(){
  static int counter = 48;
  counter+=2;
  printf("%d ",counter);
}
 