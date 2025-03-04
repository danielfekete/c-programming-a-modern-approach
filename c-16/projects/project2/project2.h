#include "readline.h"
#include "bubblesort.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} inventory[MAX_PARTS];
