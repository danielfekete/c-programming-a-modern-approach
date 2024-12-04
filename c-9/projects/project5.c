/*
* project5.c
* A program that prints an n*n magic square
*/

#include <stdio.h>
#include <ctype.h>

void create_magic_square(int n, int magic_square[99][99]);
void print_magic_square(int n, int magic_square[99][99]);

int main(void){
    int n, magic_square[99][99] = {0};
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    create_magic_square(n,magic_square);

   print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, int magic_square[99][99]){
    int row,
        new_row, 
        col,
        new_col;

    row = 1;
    col = n / 2 - 1;
    for(int i = 1; i <= n * n; i++){
        new_row = row - 1 < 0 ? n - 1 : row - 1;
        new_col = col + 1 > n - 1 ? 0 : col + 1;
        if(magic_square[new_row][new_col]){
            new_row = row + 1 > n - 1 ? 0 : row + 1;
            new_col = col;
        }
        row = new_row;
        col = new_col;
        magic_square[row][col] = i;
    }
}

void print_magic_square(int n, int magic_square[99][99]){
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t",magic_square[i][j]);
        }
        printf("\n");
    }
}
