/*
* Project 3
* A program that breaks down ISBN entered by the user
*/

#include <stdio.h>

int main(void)
{
    int prefix, groupId, publisherCode, itemNumber, checkDigit;  

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &groupId, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n",prefix);
    printf("Group identifier: %d\n",groupId);
    printf("Publisher code: %d\n",publisherCode);
    printf("Item number: %d\n",itemNumber);
    printf("Check digit: %d\n",checkDigit);

    return 0;
}
