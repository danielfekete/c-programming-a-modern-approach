/*
 * A program that calculates the remaining balance on a loan
 * after n number of payments
 */

#include <stdio.h>

int main(void)
{
    float loan, interest, payment, monthly_interest, balance;

    int n;

    printf("Enter the amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    printf("Enter the number of payments: ");
    scanf("%d", &n);

    monthly_interest = interest / 100.0 / 12.0;

    balance = loan;

    for(int i = 1; i <= n; i++){
        balance = balance - payment + (monthly_interest * balance);
        printf("Balance remaing after %d. payment: %.2f\n",i, balance);
    }

    return 0;
}
