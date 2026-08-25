#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
        0 --> Snake    OR 0 = Rock 
        1 --> Water       1 = Scissors 
        2 --> Gun         2 = Paper 
    */
    printf("choose 0 for Snake, 1 for Water and 2 for Gun\n");
    // printf("choose 0 for Rock, 1 for Scissors  and 2 for Paper\n");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a Draw!\n");
    }
    else
    {
        printf("Something went wrong!\n");
    }

    return 0;
}