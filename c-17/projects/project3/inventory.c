#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void erase(void);

/**
 * @brief Prompts the user to enter an operation code,
 * then calls a function to perform the requested
 * action. Repeats until the user enters the
 * command 'q'. Prints an error message if the user
 * enters an illegal code.
 * 
 * @return int 
 */
int main(void){
    char code;

    for(;;){
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n');
        switch(code){
            case 'i' : insert();
                  break;
            case 's' : search();
                  break;
            case 'u' : update();
                  break;
            case 'p' : print();
                  break;
            case 'e': erase();
                  break;
            case 'q' : return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}

/**
 * @brief Looks up a part number in the inventiory
 * array. Returns the array index if the part
 * number is found; otherwise, returns -1
 * 
 * @param number 
 * @return int 
 */

struct part *find_part(int number){
    
    struct part *p;

    for(p = inventory; p != NULL && number > p -> number; p = p->next);

    if(p != NULL && number == p->number){
        return p;
    }

    return NULL;
}

/**
 * @brief Prompts the user for information about a new
 * part then inserts the part into the
 * database. Prints an error message and returns
 * prematurely if the part already exists or the
 * database is full.
 * 
 */

void insert(void){
   struct part *cur,*prev,*new_node;

   new_node = malloc(sizeof(struct part));

   if(new_node == NULL){
        printf("Database is full; can't add more parts.\n");
        return;
   }

   printf("Enter part number: ");
   scanf("%d", &new_node->number);

   for(cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number;prev = cur, cur = cur->next);
   if(cur != NULL && new_node->number == cur->number){
    printf("Part already exists.\n");
    free(new_node);
    return;
   }

   printf("Enter a part name: ");
   read_line(new_node->name, NAME_LEN);
   printf("Enter quantity on hand: ");
   scanf("%d", &new_node->on_hand);

   new_node->next = cur;
   if(prev == NULL){
        inventory = new_node;
   }else{
        prev->next = new_node;
   }
}

/**
 * @brief Prompts the user to enter a part number, then
 * looks up the part in the database. If the part
 * exists, print the name and quantity on hand;
 * if not, prints an error message.
 */

void search(void){
    int number;

    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if(p == NULL){
        printf("Part not found.\n");
    }else{
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    }
}

void erase(void){
    int number;

    struct part **pp = &inventory;
    struct part *temp;

    while(*pp){
        if((*pp)->number == number){
            temp = *pp;
            *pp = (*pp)->next;
            free(temp);
            return;
        }
        pp = &(*pp)->next;
    }
}

/**
 * @brief Prompts the user to enter a part number.
 * Prints an error message if the part doesn't
 * exist; otherwise, prompts the user to enter
 * change in quantity on hand and updates the
 * database.
 * 
 */

void update(void){
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if(p == NULL){ 
        printf("Part not found.\n");
    }else{
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    }
}

/**
 * @brief Prints a listing of all parts in the database
 * showing the part number, part name, and
 * quantity on hand. Parts are printed in the
 * order in which they were entered into the
 * database.
 * 
 */

void print(void){
    struct part *p;

    printf("Part Number Part Name"
           "Quantity on Hand\n");
    for(p = inventory; p != NULL; p = p->next){
        printf("%7d %-25s%11d\n", p->number, p->name, p->on_hand);
    }
}
