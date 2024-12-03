/*
* Project 11
* A program that translates an alphabetic phone number
* into numeric form
*/
#include <stdio.h>


int main(void){
    char c,
        phone_number[15] = {0};
    int i = 0;

    printf("Enter phone number: ");

    while((c = getchar()) != '\n'){
        switch(c){
            case 'A': case 'B': case 'C':
                phone_number[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                phone_number[i] = '3';
                break;
            case 'G': case 'H': case 'I' :
                phone_number[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                phone_number[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                phone_number[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                phone_number[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                phone_number[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phone_number[i] = '9';
                break;
            default:
                phone_number[i] = c;
                break;
        }
        i++;
    }

    printf("In numeric form: ");
    for(int i = 0; i < 15; i++){
        printf("%c",phone_number[i]);
    }
    printf("\n");

    return 0;
}
