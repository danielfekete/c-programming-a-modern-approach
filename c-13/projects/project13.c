/*
* project13.c
* A program that encrypts a message using a Ceasar cipher
*/

#include <stdio.h>

void encrypt(char *message, int shift);
int read_line(char str[], int n);

int main(void){
    int shift;
    char message[80];

    printf("Enter a message to be encrypted: ");

    read_line(message, 80);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);

    printf("Encrypted message: %s\n", message);

    return 0;
}

void encrypt(char *message, int shift){
    for(;*message;message++){
        if(*message >= 'A' && *message <= 'Z'){
            *message = ((*message - 'A') + shift) % 26 + 'A';
        }else if(*message >= 'a' && *message <= 'z'){
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }
    }
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
