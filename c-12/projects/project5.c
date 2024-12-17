/*
* project5.c
* A program that reverses the words in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char c,
        *p,
        *q,
        t,
        characters[100]={0};
    int len;

    printf("Enter a sentece: ");
    for(p = characters; (c = getchar()) != '\n' && p < characters + 100; p++){
        if(c == '.' || c == '!' || c == '?'){
            t = c;
            break;
        }
        *p = c;
    }

    printf("Reversal of sentence: ");
    while(p >= characters){
        while(*--p != ' ' && p != characters);

        q = p == characters ? characters
        : p + 1;
        while(*q != ' ' && *q != '\0'){
            putchar(*q++);
        }
        if(p >= characters){
            putchar(' ');
        }
    }
    printf("%c\n", t);

    return 0;
}
