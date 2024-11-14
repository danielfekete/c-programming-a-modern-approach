/*
* Project 3
* broker.c
*/

#include <stdio.h>

int main(void)
{
    int shares;
    float price, commission, value;


    printf("Enter the number of shares: ");
    scanf("%d",&shares);
    printf("Enter the price per share: ");
    scanf("%f",&price);

    value = shares * price;

    if(value < 2500.00f)
    {
        commission = 30.00f + 0.017f * value;
    }
    else if(value < 6250.00f)
    {
        commission = 56.00f + 0.0066f * value;
    }
    else if(value < 20000.00f)
    {
        commission = 76.00f + 0.0034f * value;
    }
    else if(value < 50000.00f)
    {
        commission = 100.00f + 0.0022f * value;
    }
    else if(value < 500000.00f)
    {
        commission = 155.00f + 0.0011f * value;
    }
    else
    {
        commission = 255.00f + 0.0009f * value;
    }

    if(commission < 39.00f)
    {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n",commission);

    printf("Rival's commission: $%.2f\n", shares < 2000 ? 33.00f + (0.03f * shares) : 33.00f + (0.02f * shares));


    return 0;
}
