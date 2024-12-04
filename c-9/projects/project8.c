/*
* project8.c
* A program that simulates the game of craps
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void){
    int wins = 0, losses = 0;
    bool play_again = false, result;
    char c;

    srand((unsigned) time(NULL));

    do{
        play_again = false;
        result = play_game();
        if(result){
            printf("You win!\n");
            wins++;
        }else{
            printf("You lose!\n");
            losses++;
        }
        printf("Play again? ");
        scanf(" %c", &c);
        if(tolower(c) == 'y'){
            play_again = true;
        }
    }while(play_again);

    printf("Wins: %d\n", wins);
    printf("Losses: %d\n", losses);

    return 0;
}

int roll_dice(){
    return rand() % 6 + rand() % 6;
}

bool play_game(){
    int roll;
    int point = 0;

    for(;;){
        roll = roll_dice();
        printf("You rolled %d\n", roll);
        // First round
        if(point == 0){
            if(roll == 7 || roll == 11){
                return true;
            }else if(roll == 2 || roll == 3 || roll == 12){
                return false;
            }
            point = roll;
            printf("Your point is: %d\n", point);
        }else{
            if(roll == 7){
                return false;
            }
            if(roll == point){
                return true;
            }
        }
        
    }
}
