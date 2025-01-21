/*
* project9.c
* A program that counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

#define LEN 100

int compute_vowel_count(const char *sentence);


int main(void){
    int sum = 0;
    char sentence[LEN + 1];

    printf("Enter a sentence: ");
    scanf("%s", sentence);

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

    return 0;    
}


int compute_vowel_count(const char *sentence){
    int sum = 0;
    while(*sentence){
        switch(tolower(*sentence++)){
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    sum++;
                    break;
                default:
                    break;
            }
    }
    return sum;
}
