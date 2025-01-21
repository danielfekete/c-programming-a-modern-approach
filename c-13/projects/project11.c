/*
* project11.c
* A program that calculates the average word length
* of a sentence
*/
#include <stdio.h>
#define LEN 100

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void){
    char c;
    float n = 0.0f, sum = 0.0f;
    char sentence[LEN + 1];

    printf("Enter a sentence: ");

    read_line(sentence, LEN);

    printf("Avarage word length: %.1f\n",  compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence){
    double sum = 0.0f, n = 0.0f;

    while(*sentence){
        if(*sentence++ == ' '){
            n++;
            continue;
        }
        sum++;
    }
    n++;

    return sum / n;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}
