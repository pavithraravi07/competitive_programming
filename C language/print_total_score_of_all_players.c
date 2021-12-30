/*

Fill in the missing lines of code to implement the function printTotalScore so that the program prints the total score of all the players in the team.

*/


#include <stdio.h>

#define PLAYER_COUNT 5

struct Player
{
    int score;
};

struct Team
{
    char name[50];
    struct Player players[PLAYER_COUNT];

};

int main()
{
    struct Team team;
    fgets(team.name,50,stdin);
    int index=0;
    while(index < PLAYER_COUNT)
    {
        scanf("%d",&team.players[index].score);
        index++;
    }

    printTotalScore(team);

    return 0;
}

int printTotalScore(struct Team team)
{
    int totalScore=0;
    int index=0;
    while(index < PLAYER_COUNT)
    {
        totalScore+=team.players[index].score;
        index++;
    }
    printf("%d",totalScore);
}

