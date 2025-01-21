/*
* project1.c
* A program that finds the smallest and largest in a series of words.
*/
#include <stdio.h>
#include <string.h>

#define LEN 20

char smallest_word[LEN + 1], largest_word[LEN + 1], word[LEN + 1];

void init(void);

int main(void){
    init();    

    while(strlen(word) != 4){
        printf("Enter a word: ");
        scanf("%s", word);
        if(strcmp(word, smallest_word) < 0){
            strcpy(smallest_word, word);
        }
        else if(strcmp(largest_word, word) < 0){
            strcpy(largest_word, word);
        }
    }

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n",largest_word);

    return 0;
}

void init(){
    printf("Enter a word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
}
