/*
* Project 14
* A program that reverses the words in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int i,
        len;
    char c,
        t,
        characters[100]={0};

    printf("Enter a sentece: ");


    for(i = 0; (c = getchar()) != '\n' && i < 100; i++){
        if(c == '.' || c == '!' || c == '?'){
            t = c;
            break;
        }
        characters[i] = c;
    }

    printf("Reversal of sentence: ");

    len = 0;
    for(--i; i >= 0; i--){
        if(characters[i] == ' ' || i == 0){
            for(int j = i == 0 ? i : i + 1; j < i + 1 + len; j++){
                printf("%c",characters[j]);
            }
            len = 0;
            if(characters[i] == ' '){
                printf("%c", characters[i]);
            }
        }else{
            len++;
        }
    }
    printf("%c\n", t);

    return 0;
}
