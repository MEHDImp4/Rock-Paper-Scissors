#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {
    initialize_ai();
    printf("\t********** Rock Paper Scissors - The Game **********\n");
    int mode = chooseGame();
    system("cls");
    printf("\t********** Rock Paper Scissors - The Game **********\n");
    int playerMove[2], botMove;
    if (mode == 1) 
    {
        playerMove[1] = chooseMove();
        botMove = ai();
        system("cls");
        printf("\t********** Rock Paper Scissors - The Game **********\n");
        const char *moves[] = {"Rock", "Paper", "Scissors"};
        printf("\nYou chose: %s\n", moves[playerMove[1] - 1]);
        printf("The computer chose: %s\n", moves[botMove - 1]);
        if (playerMove == botMove) 
        {
            printf("\nIt's a tie!\n");
        } 
        else if ((playerMove == ROCK && botMove == SCISSORS) || (playerMove == PAPER && botMove == ROCK) || (playerMove == SCISSORS && botMove == PAPER)) 
        {
            printf("\nYou win!\n");
        } 
        else 
        {
            printf("\nComputer wins!\n");
        }
    }
    else if (mode == 2)
    {
        printf("Player 1 make your choice !!\n");
        playerMove[1] = chooseMove();
        system("cls");
        printf("\t********** Rock Paper Scissors - The Game **********\n");
        printf("Player 2 make your choice !!\n");
        playerMove[2] = chooseMove();
        system("cls");
        printf("\t********** Rock Paper Scissors - The Game **********\n");
        const char *moves[] = {"Rock", "Paper", "Scissors"};
        printf("\nPlayer 1 chose: %s\n", moves[playerMove[1] - 1]);
        printf("Player 2 chose: %s\n", moves[playerMove[2] - 1]);
        if (playerMove[1] == playerMove[2]) 
        {
            printf("\nIt's a tie!\n");
        } 
        else if ((playerMove[1] == ROCK && playerMove[2] == SCISSORS) || (playerMove[1] == PAPER && playerMove[2] == ROCK) || (playerMove[1] == SCISSORS && playerMove[2] == PAPER)) 
        {
            printf("\nPlayer 1 win!\n");
        } 
        else 
        {
            printf("\nPlayer 2 win!\n");
        }
    }
    return 0;
}