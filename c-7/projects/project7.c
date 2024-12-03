/*
* Project 7
* Adds, multiplies, divides or subtracts two fractions
*/
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    char c;

    printf("Enter two fractions seperated by an operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &c, &num2, &denom2);

    switch(c){
        case '+':
            result_num = num1 * denom2 + num2 * denom1;result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
         printf("The operation %c is not supported.",c);
         return 1;
    }

    
    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}
