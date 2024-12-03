/*
* Project 15
* A program that encrypts a message using a Ceasar cipher
*/

#include <stdio.h>

int main(void){
    char ch, letters[80]={0};
    int shift, i;

    printf("Enter a message to be encrypted: ");

    i = 0;
    while((ch = getchar()) != '\n'){
        letters[i] = ch;
        i++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for(int i = 0; i < 80; i++){
        if(letters[i] >= 'A' && letters[i] <= 'Z'){
            printf("%c",((letters[i] - 'A') + shift) % 26 + 'A');
        }else if(letters[i] >= 'a' && letters[i] <= 'z'){
            printf("%c",((letters[i] - 'a') + shift) % 26 + 'a');
        }else{
            printf("%c",letters[i]);
        }
    }
    printf("\n");


    return 0;
}
