/*
* project2.c
* A program that asks the user to enter the amount of taxable income, then displays the tax due.
*/
#include <stdio.h>

float compute_income_tax(float income);

int main(void){
    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    printf("Tax due: %.2f\n", compute_income_tax(income));
    
    return 0;
}

float compute_income_tax(float income){
    if(income < 750.00f){
        return income * 0.01f;
    }
    if(income < 2250.00f){
        return 7.50f + income * 0.02f;
    }
    if(income < 3750.00f){
        return 37.50f + income * 0.03f;
    }
    if(income < 5250.00f){
        return 82.50f + income * 0.04f;
    }
    if(income < 5250.00f){
        return 142.50f + income * 0.05f;
    }
    return 230.00f + income * 0.06f;
}
