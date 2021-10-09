/*
Fill in the missing lines of code in the program below so that the below program executes as per the details provided below.

 Accepts an array of numbers and then accepts an integer search value.
 Prints the index of the first occurring number which is less than the given integer search value. (index starts from zero)
 If no number is less than the given search value then it prints -1 as the output.
 */



 #include<stdio.h>

void main()
{
    int listsize;
    scanf("%d",&listsize);
    //Declare an Array for the desired size.
    int values[listsize];

    //Accept the input values
    int ctr;
    for(ctr=0; ctr<listsize; ctr++)
    {
        scanf("%d",&values[ctr]);
    }

    int searchValue;
    scanf("%d",&searchValue);

    //Now do the linear search.
    int index;
    for(index=0;index<listsize;index++){
        if(values[index] < searchValue){
            printf("%d",index);
            return;
        }
    }

   //If the execution comes here, then no value is less than the search value in the array (input list of numbers)
   printf("-1");

}