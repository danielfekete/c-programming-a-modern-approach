/**
 * A program that computes a volume of a sphere with r meter radius.
 * v = 4/3 * π * r^3
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float r;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&r);

    printf("A volume of a sphere: %2f\n",(4.0f / 3.0f) * M_PI * r * r * r);

    return 0;
}
