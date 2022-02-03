/*

Two numbers x and y are passed as input to the program. The program must print the number of odd numbers that are divisible by 7 from x to y (inclusive of x and y).

Example Input and Output 1:
Input:
2
31

Output:
2

Explanation:
The numbers from 2 to 31 that are divisible by 7 are 7, 14, 21, 28.
Among these, the odd numbers are 7 and 21. Hence their count 2 is printed as the output.

Example Input and Output 2:
Input:
10
49

Output:
3

Explanation:
The odd numbers from 10 to 49 that are divisible by 7 are 21, 35, 49

 */


 #include<stdio.h>

void main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
    int count = 0;
    for(int ctr = x; ctr <= y; ctr++)
    {
        if(ctr % 7 == 0 && ctr % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
}