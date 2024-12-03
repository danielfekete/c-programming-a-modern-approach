/*
* project6.c
* Reverses the series of numbers
*/
#include <stdio.h>
#include <ctype.h>

#define SIZE 256
int main(void){
    char letters[SIZE]={0}, ch;
    int i;

    printf("Enter message: ");
    while((ch = getchar()) != '\n'){
        letters[i] = toupper(ch);
        i++;
    }
    
    printf("In B1FF-speak: ");

    for(i = 0; i < SIZE; i++){
        switch(letters[i]){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(letters[i]);
                break;
        }
        
    }
    for(i = 0; i < 10; i++){
        putchar('!');
    }
    printf("\n");


    return 0;
}
