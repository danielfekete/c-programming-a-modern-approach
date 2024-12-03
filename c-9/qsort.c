/*
* average.c
* Computes pairwise averages of three numbers
*/
#include <stdio.h>
#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){
    int a[N], i;

    printf("Enter numbers to be sorted: ");
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, i, N - 1);

    return 0;
}

void quicksort(int a[], int low, int high){
    int middle;
    if(low >= high){
        return;
    }
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high){
    int part_element = a[low];

    for(;;){
        while(low <= high && part_element <= a[high]){
            high--;
        }
        if(low >= high){
            break;
        }
        a[low++] = a[high];

        while(low < high && a <= part_element){
            low++;
        }
        if(low >= high){
            break;
        }
        a[high--] = a[low];
    }

    a[high] = part_element;

    return high;
}
