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

int comp(const void *a, const void *b);

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

    qsort(words, n, sizeof(words[0]), comp);

    for(i = 0; i < n ; i++){
        printf(" %s", words[i]);
        free(words[i]);
    }
    printf("\n");
    free(words);

    return 0;
}

int comp(const void *a, const void *b){
    return strcmp(*(char **)a, *(char **)b);
}
