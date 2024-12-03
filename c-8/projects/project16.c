/*
* Project 16
* A program that tests wether two words are anagrams
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    int seen[26] = {0};
    char ch;
    
    printf("Enter first word: ");

    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            seen[25 - ('z' - tolower(ch))]++;
        }
    }

    printf("Enter second word: ");

    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            seen[25 - ('z' - tolower(ch))]--; 
        }
    }

    for(int i = 0; i < 26; i++){
        if(seen[i]){
            printf("The two word are not anagrams\n");
            return 0;
        }
    }

    printf("The two word are anagrams\n");

    return 0;
}
