#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);

struct node *first = NULL;

// struct node *new_node;
// new_node = malloc(sizeof(struct node)); // allocate memory for the node

// new_node->value=10; // store data in the node (*new_node).value = 10; 

// new_node->next = first; // new node next point to the prev first node
// first = new_node; // first point to the new node

int main(){
    first = add_to_list(first, 10);
    first = add_to_list(first, 20);
}


struct node *add_to_list(struct node *list, int n){
    struct node *new_node;

    new_node = malloc(sizeof(struct node)); // allocate memory for the node

    if(new_node == NULL){
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n; // store data in the node (*new_node).value = 10; 
    new_node->next = list; // new node next point to list(first node)

    return new_node;
}

struct node *delete_from_list(struct node *list, int n){
    struct node *cur, *prev;

    for(cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next){}

    if(cur == NULL){
        return list;    // n was not found
    }
    if(prev == NULL){
        list = list -> next;    // n is in the first node
    }else{
        prev->next = cur->next; // n is in some other node
    }

    free(cur);

    return list;
}

struct node *read_numbers(void){
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for(;;){
        scanf("%d", &n);
        if(n == 0){
            return first;
        }
        first = add_to_list(first, n);
    }
}

struct node *search_list(struct node *list, int n){
    // struct node *p;

    // for(p = list; p != NULL; p = p->next){
    //     if(p->value == n){
    //         return p;
    //     }
    // }

    // return NULL;

    // for(;list != NULL; list = list->next){
    //     if(list->value == n){
    //         return list;
    //     }
    // }
    // return NULL;

    // for(;list != NULL && list->value != n; list = list->next){
    // }
    // return list;

    while(list != NULL && list->value != n){
        list = list->next;
    }
    return list;
}
