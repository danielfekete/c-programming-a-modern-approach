#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    int price;
} inventory[MAX_PARTS];

int num_parts = 0; /* number of parts currently stored */

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void change_price(void);

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
            case 'c': change_price();
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

int find_part(int number){
    int i;
    for(i = 0; i < num_parts; i++){
        if(inventory[i].number == number){
            return i;
        }
    }
    return -1;
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
    int part_number;

    if(num_parts == MAX_PARTS){
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d",&part_number);

    if(find_part(part_number) >= 0){
        printf("Part number is already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter part price: ");
    scanf("%d", &inventory[num_parts].price);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    
    num_parts++;
}

/**
 * @brief Prompts the user to enter a part number, then
 * looks up the part in the database. If the part
 * exists, print the name and quantity on hand;
 * if not, prints an error message.
 */

void search(void){
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0){
        printf("Part name: %s\n", inventory[i].name);
        printf("Part price: %d\n", inventory[i].price);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }else{
        printf("Part not found.\n");
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
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0){ 
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    }else{
        printf("Part not found.\n");
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
    int i;

    printf("Part Number Part Name"
           "Part Price  Quantity on Hand\n");
    for(i = 0; i < num_parts; i++){
        printf("%7d %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].price, inventory[i].on_hand);
    }
}

void change_price(void){
    int number, i, new_price;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0){
        printf("Enter the new price for the item: ");
        scanf("%d", new_price);
        inventory[i].price = new_price;
    }else{
        printf("Part not found.\n");
    }
}
