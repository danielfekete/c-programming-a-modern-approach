/**
 * project7.c
 * A program that asks a user for a two digit number then prints the  
 * English word for the number
 */

#include <stdio.h>

int main(void){
    int n1, n2;

    char *tens[]={
        "twenty",
        "thirty",
        "fourty",
        "fifty",
        "sixty",
        "seventy",
        "eighty",
        "ninety"
    };

    char *ones[]={
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &n1, &n2);

    printf("You entered the number ");

    if(n1 == 1){
        switch(n2){
            case 0:
                printf("ten");
                break;
            case 1:
                printf("eleven");
                break;
            case 2:
                printf("twelve");
                break;
            case 3:
                printf("thirteen");
                break;
            case 4:
                printf("fourteen");
                break;
            case 5:
                printf("fifteen");
                break;
            case 6:
                printf("sixteen");
                break;
            case 7:
                printf("seventeen");
                break;
            case 8:
                printf("eighteen");
                break;
            case 9:
                printf("nineteen");
                break;
            
        }
    }else{
        if(n2 == 0){
            printf("%s",tens[n1 - 2]);    
        }else{
            printf("%s-%s",tens[n1 - 2], ones[n2 - 1]);
        }
    }

    printf(".\n");

    return 0;
}


