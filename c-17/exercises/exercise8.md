```c

struct node{
    int value;
    struct node *next;
}

node *top = NULL;

void make_empty(void){
    struct node *temp;

    while(top != NULL){
        temp = top;
        top = top -> next;
        free(temp);
    }
}

void is_empty(void){
    return top == NULL;
}

int push(int i){
    struct node *new = malloc(sizeof(struct node))
    if(new == NULL){
        return false;
    }

    new -> value = i;
    new -> next = top;
    top = new;

    return true;
}

int pop(void){
    struct node *temp;
    int i;
    if(is_empty()){
        printf("Error: stack underflow");
        exit(EXIT_FAILURE);
    }
    i = top -> value;
    temp = top;
    top = top -> next;

    free(temp);

    return i;
}

```
