#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

int line_len = 0;
int num_words = 0;

struct node{
    struct node *next;
    char word[];
} *line = NULL;


void clear_line(void){
    struct node *temp;
    while(line != NULL){
        temp = line;
        line = line -> next;
        free(temp);
    }
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word){
    struct node *new_word, **pp = &line;

    new_word = malloc(sizeof(struct node) + strlen(word) + 1);

    if(new_word == NULL){
        printf("Error while allocating new word.\n");
        return;
    }
    strcpy(new_word->word, word);

    for(;*pp != NULL;*pp = &(*pp)->next);
    *pp = new_word;

    line_len += strlen(word);
    if (num_words > 0){ // Add space
        line_len++;
    }
    num_words++;
}

int space_remaining(void){
    return MAX_LINE_LEN - line_len;
}

void write_line(void){
    int extra_spaces, spaces_to_insert, i, j;
    int char_count = 0;

    struct node *entry = line;
    extra_spaces = space_remaining();
    while (char_count < line_len && entry != NULL) {
        printf("%s", entry->word);
      if (num_words > 1) {
          spaces_to_insert = extra_spaces / (num_words - 1);
          for (i = 1; i <= spaces_to_insert + 1; i++)
              putchar(' ');
          extra_spaces -= spaces_to_insert;
      }
      char_count += strlen(entry->word) + 1;
      num_words--;
      entry = entry->next;
    }
    putchar('\n');
}

void flush_line(void){
    int i;
    struct node *entry = line;
    if(line_len > 0){
        for(i = 0; entry != NULL; i++, entry = entry->next){
            if(i > 0 && entry->next != NULL){
                putchar(' ');
            }
            printf("%s ", entry->word);
        }
    }
    printf("\n");
    clear_line();
}
