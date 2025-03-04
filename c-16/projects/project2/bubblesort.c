#include "bubblesort.h"

void bubblesort(struct part array[],int size){
    for(int i = 0; i < size; i++){
        int swaps = 0;
        for(int j = 0; j < size-i-1; i++){
            if(array[j].number > array[j+1].number){
                struct part temp;

                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swaps = 1;
            }
        }
        if(!swaps){
            break;
        }
    }
}
