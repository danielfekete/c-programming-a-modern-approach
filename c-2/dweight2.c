#include <stdio.h>
#define INCHES_PER_ROUND 166

int main(void)
{
    int height,length,width,volume,weight;

    printf("Enter the height of the box: ");
    scanf("%d",&height);
    printf("Enter the length of the box: ");
    scanf("%d",&length);
    printf("Enter the width of the box: ");
    scanf("%d",&width);
    
    volume = height * length * width;

    weight = (volume + INCHES_PER_ROUND - 1) / INCHES_PER_ROUND;

    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight(pounds): %d\n",weight);

    return 0;
}
