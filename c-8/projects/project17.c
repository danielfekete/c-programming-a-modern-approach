/*
* Project 17
* A program that prints an n*n magic square
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int n,
        grid[99][99]={0},
        row,
        new_row, 
        col,
        new_col;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    row = 1;
    col = n / 2 - 1;
    for(int i = 1; i <= n * n; i++){
        new_row = row - 1 < 0 ? n - 1 : row - 1;
        new_col = col + 1 > n - 1 ? 0 : col + 1;
        if(grid[new_row][new_col]){
            new_row = row + 1 > n - 1 ? 0 : row + 1;
            new_col = col;
        }
        row = new_row;
        col = new_col;
        grid[row][col] = i;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t",grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
