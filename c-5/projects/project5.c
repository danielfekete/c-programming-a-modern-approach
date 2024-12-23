/*
* Project 5
* A program that asks the user to enter the amount of taxable income, then displays the tax due.
*/
#include <stdio.h>

int main(void){
    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if(income < 750.00f){
        tax = income * 0.01f;
    }else if(income < 2250.00f){
        tax = 7.50f + income * 0.02f;
    }else if(income < 3750.00f){
        tax = 37.50f + income * 0.03f;
    }else if(income < 5250.00f){
        tax = 82.50f + income * 0.04f;
    }else if(income < 5250.00f){
        tax = 142.50f + income * 0.05f;
    }else{
        tax = 230.00f + income * 0.06f;
    }

    printf("Tax due: %.2f\n", tax);
    
    return 0;
}
