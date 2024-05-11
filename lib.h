#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void initialize_ai() 
{
    srand(time(NULL));
}
int ai() 
{
    return rand() % 3 + 1; 
}
int chooseGame() {
    int mode;
    printf("\nChoose the game mode:\n");
    printf("\n1 - Player vs bot.\n");
    printf("2 - Player vs player.\n");
    do {
        printf("\nChoice: ");
        scanf("%d", &mode);
    } while (mode < 1 || mode > 2);
    return mode;
}
int chooseMove() {
    int move;
    printf("\n1 - Rock.\n");
    printf("2 - Paper.\n");
    printf("3 - Scissors.\n");
    do {
        printf("\nYour choice: ");
        scanf("%d", &move);
    } while (move < 1 || move > 3);
    return move;
}