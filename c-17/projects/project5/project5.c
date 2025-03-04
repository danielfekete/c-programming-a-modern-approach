/**
 * @brief A program that sorts a series of words entered by the user
 * 
 * @return int 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define MAX_LEN 20

int main(void){
    char **words = NULL;
    char word[MAX_LEN + 1];
    int i = 0;

    for(;;i++){
        printf("Enter a word: ");
        read_line(word, MAX_LEN);
        
        if(word[0] == '\0'){
            break;
        }
        words = realloc(words, sizeof(word) * (i + 1));
        words[i] = malloc(strlen(word) + 1);
        if(words[i] == NULL){
            printf("-- No space left --\n");
            break;
        }

        strcpy(words[i], word);
    }

    printf("In sorted order:");
    int n = i;
    // Bubble sort
    for(i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(words[j], words[j + 1]) > 0){
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n ; i++){
        printf(" %s", words[i]);
        free(words[i]);
    }
    printf("\n");
    free(words);

    return 0;
}
