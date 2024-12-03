/*
* Project 13
* A program that calculates the average word length
* of a sentence
*/
#include <stdio.h>

int main(void){
    char c;
    float n = 0.0f, sum = 0.0f;

    printf("Enter a sentence: ");

    while((c = getchar()) != '\n'){
        if(c == ' '){
            n++;
            continue;
        }
        sum++;
    }
    n++;

    printf("Avarage word length: %.1f\n",  sum / n);

    return 0;
}
