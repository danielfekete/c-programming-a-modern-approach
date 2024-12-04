/*
* project3.c
* Program that generates a random walk across a 10 * 10 array
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]);

void print_array(char walk[N][N]);

int main(void){
    
    char walk[N][N] = {0};
    
    generate_random_walk(walk);

    print_array(walk);
    
    return 0;
}


void generate_random_walk(char walk[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            walk[i][j] = '.';
        }
    }

    int move = 0,
        i = 0,
        j = 0,
        left = 0,
        down = 0,
        right = 0,
        up = 0;
    char letter = 'A';

    srand((unsigned) time(NULL));

    while(letter <= 'Z'){
        right = 0;
        down = 0;
        left = 0;
        up = 0;

        if(j + 1 < N && walk[i][j + 1] == '.'){
            right = 1;
        }
        if(i + 1 < N && walk[i + 1][j] == '.'){
            down = 1;
        }
        if(j - 1 >= 0 && walk[i][j - 1] == '.'){
            left = 1;
        }
        if(i - 1 >= 0 && walk[i - 1][j] == '.'){
            left = 1;
        }

        if(left + down + right + up == 0){
            break;
        }

        move = rand() % 4;
       switch(move){
            // Left
            case 0:
                if(left){
                    walk[i][++j] = letter++;
                }
                break;
            // Go down
            case 1:
                if(down){
                    walk[++i][j] = letter++;
                }
                break;
            // Go right
            case 2:
                if(right){
                    walk[i][--j] = letter++;
                }
                break;
            // Go up
            case 3:
                if(up){
                    walk[--i][j] = letter++;
                }
                break;
            default:
                break;
       }
        
    }
}

void print_array(char walk[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%c ",walk[i][j]);
        }
        printf("\n");
    }
}
