/*
* project9.c
* Program that generates a random walk across a 10 * 10 array
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
int main(void){
    int move = 0,
        i = 0,
        j = 0,
        left = 0,
        down = 0,
        right = 0,
        up = 0;
    char fields[N][N] = {0};
    char letter = 'A';

    srand((unsigned) time(NULL));

    while(letter <= 'Z'){
        right = 0;
        down = 0;
        left = 0;
        up = 0;

        if(j + 1 < N && fields[i][j + 1] == 0){
            right = 1;
        }
        if(i + 1 < N && fields[i + 1][j] == 0){
            down = 1;
        }
        if(j - 1 >= 0 && fields[i][j - 1] == 0){
            left = 1;
        }
        if(i - 1 >= 0 && fields[i - 1][j] == 0){
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
                    fields[i][++j] = letter++;
                }
                break;
            // Go down
            case 1:
                if(down){
                    fields[++i][j] = letter++;
                }
                break;
            // Go right
            case 2:
                if(right){
                    fields[i][--j] = letter++;
                }
                break;
            // Go up
            case 3:
                if(up){
                    fields[--i][j] = letter++;
                }
                break;
            default:
                break;
       }
        
    }


    // Print
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(fields[i][j] == 0){
                fields[i][j] = '.';
            }
            printf("%c ",fields[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
