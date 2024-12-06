/*
* project7.c
* A program that prompts the user for a number
* than displays the number to simulate the effect of a seven-segment display
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
    };

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void){
    char ch;
    int position = 0;

    clear_digits_array();

    printf("Enter a number: ");

    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void){
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < MAX_DIGITS * 4; col++){
            digits[row][col] = ' ';
        }
    }
}

void process_digit(int digit, int position){
    int row, col;
    char ch = '|';
    for(int i = 0; i < 7; i++){
        if(segments[digit][i] == 1){
            switch(i){
                // First row
                // Second column
                case 0:
                    row = 0;
                    col = 1;
                    break;
                // Second row
                // First column
                case 5:
                    row = 1;
                    col = 0;
                    break;
                // Second column:
                case 6:
                    row = 1;
                    col = 1;
                    break;
                // Third column
                case 1:
                    row = 1;
                    col = 2;
                    break;
                // Third row
                // First column
                case 4:
                    row = 2;
                    col = 0;
                    break;
                // Third column
                case 2:
                    row = 2;
                    col = 2;
                    break;
                // Second column
                case 3:
                    row = 2;
                    col = 1;
                    break;
            }
            if(col % 2 == 1){
                ch = '_';
            }else{
                ch = '|';
            }
            digits[row][position + col] = ch;
        }
    }
}

void print_digits_array(void){
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < MAX_DIGITS * 4; col++){
            printf("%c",digits[row][col]);
        }
        printf("\n");
    }
}
