/*
* project1.c
* A program that asks a user to enter a series
* then sorts the integers with selection sort
*/
#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void){

    int arr[5] = {0};
    
    printf("Enter 5 integers: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, 5);

    printf("Sorted: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int arr[],int n){
    if(n == 0){
        return;
    }
    int largest = 0, temp;

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[largest]){
            largest = i;
        }
    }
    temp = arr[largest];
    arr[largest] = arr[n - 1];
    arr[n - 1] = temp;

    selection_sort(arr, n - 1);
}
