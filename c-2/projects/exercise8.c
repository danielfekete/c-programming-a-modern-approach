#include <stdio.h>

int main(void)
{
    float loan, interest, payment, monthly_interest, balance;

    printf("Enter the amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    monthly_interest = interest / 100.0 / 12.0;

    balance = loan - payment + (monthly_interest * loan);
    printf("Balance remaing after first payment: %.2f\n",balance);
    balance = balance - payment + (monthly_interest * balance);
    printf("Balance remaing after second payment: %.2f\n",balance);
    balance = balance - payment + (monthly_interest * balance);
    printf("Balance remaing after third payment: %.2f\n",balance);

    return 0;
}
