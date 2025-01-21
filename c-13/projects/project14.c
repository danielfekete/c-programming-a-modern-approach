/*
* project14.c
* A program that tests wether two words are anagrams
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

bool are_anagrams(const char *word1, const char *word2);

int main(void){
    char word1[LEN], word2[LEN];
    
    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);
    
    if(are_anagrams(word1, word2)){
        printf("The two word are anagrams\n");
    }else{
        printf("The two word are not anagrams\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2){
    int seen[26] = {0};

    for(;*word1;word1++){
        if(isalpha(*word1)){
            seen[25 - ('z' - tolower(*word1))]++; 
        }
    }

    for(;*word2;word2++){
        if(isalpha(*word2)){
            seen[25 - ('z' - tolower(*word2))]--;
        }
    }

    for(int i = 0; i < 26; i++){
        if(seen[i]){
            return false;
        }
    }

    return true;
}
