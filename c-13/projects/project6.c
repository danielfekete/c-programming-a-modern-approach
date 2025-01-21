/*
* project6.c
* Checks planet names
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM_PLANETS 9

int compare(char *q, char *p);

int main(int argc, char *argv[]){
    char *planets[] = {
        "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"
    };

    int i, j;

    for(i = 1; i < argc; i++){
        for(j = 0; j < NUM_PLANETS; j++){
            if(compare(argv[i],planets[j])){
                    printf("%s is planet %d\n", argv[i], j + 1);
                    break;   
            }
        }
        if(j == NUM_PLANETS){
            printf("%s is not a planet\n", argv[i]);
            
        }
    }

    return 0;
}

int compare(char *q, char *p){
    if(strlen(q) != strlen(p)){
        return 0;
    }
    while(*p)
    {
        if(tolower(*p++) != tolower(*q++)){
            return 0;
        }
    }
    return 1;
}

