/*
* project12.c
* A program that reverses the words in a sentence
*/

#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 20
#define WORD_COUNT 30

int main(void){
    char c,
        t,
        sentence[WORD_COUNT][WORD_LEN + 1];
    int row = 0, col = 0;
    
    printf("Enter a sentence: ");
    while((c = getchar()) != '\n'){
        if(col > 21 || row > 30){
            break;
        }
        if(c == '.' || c == '!' || c == '?'){
            t = c;
            break;
        }
        if(c == ' '){
            sentence[row][col] = '\0';
            row++;
            col = 0;
            continue;
        }
        sentence[row][col] = c;
        col++;
    }
    sentence[row][col] = '\0';

    printf("Reversal of sentence: ");

    for(; row >= 0; row--){
        printf("%s", sentence[row]);
        if(row > 0){
            printf(" ");
        }
    }
    printf("%c\n", t);

    return 0;
}
