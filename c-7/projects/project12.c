/*
* Project 12
* A program that evaluates an expression
*/
#include <stdio.h>

int main(void){
    char c;
    float num=0.0f, res = 0.0f;

    printf("Enter an expression: ");
    scanf("%f",&res);

    while((c = getchar()) != '\n'){
        switch(c){
            case '+':
                scanf("%f", &num);
                res += num;
                break;
            case '-':
                scanf("%f",&num);
                res -= num;
                break;
            case '/':
                scanf("%f",&num);
                res /= num;
                break;
            case '*':
                scanf("%f",&num);
                res *= num;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %.2f\n", res);

    return 0;
}
