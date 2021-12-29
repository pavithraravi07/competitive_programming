/*

Fill in the missing lines of code within the function printHighestScoringTeam so that the program prints the name of the highest scoring team.

If the input values are as below,
India 324
SriLanka 288
Bangladesh 245
the output of the program must be India (As India has scored 324 runs which is the highest ).

*/



#include <stdio.h>

#define TEAM_COUNT 3

struct Team
{
    char name[50];
    int runs;
};

int main()
{
    struct Team teams[TEAM_COUNT];

    //Accept input values.
    int index=0;
    while(index < TEAM_COUNT)
    {
        scanf("%s",teams[index].name);
        scanf("%d",&teams[index].runs);
        index++;
    
    }
    printHighestScoringTeam(teams);

    return 0;
}

int printHighestScoringTeam(struct Team teams[])
{

    /*Assign the pointer to the first team*/
    struct Team *highestScoringTeam = &teams[0];
    int index=0;

    while(index < TEAM_COUNT)
    {
        if(teams[index].runs > highestScoringTeam->runs)
        {
            highestScoringTeam = &teams[index];
        }
        index++;
    }//end of while loop

    printf("%s",highestScoringTeam->name);
}
