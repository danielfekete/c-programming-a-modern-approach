/*
* Project 2
* A program that formats product information entered by the user
*/

#include <stdio.h>

int main(void)
{
    int month, day, year;
    int itemNumber;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year);

    return 0;
}
