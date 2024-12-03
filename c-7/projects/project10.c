/*
* Project 10
* A program that counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int sum = 0;
    char c;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n'){
        switch(tolower(c)){
            case 'a': case 'e': case 'i': case 'o': case 'u':
                sum++;
                break;
            default:
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", sum);

    return 0;    
}
