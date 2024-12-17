```c
#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

void make_empty(void){
    top_ptr = &contents[0];
}

bool is_empty(void){
    return top_ptr == &contents[0];
}

bool is_full(void){
    return top_ptr == &contents[STACK_SIZE];
}

void push(int ch){
    if(is_full()){
        stack_overflow();
    }
    *top_ptr++ = i;
}

int pop(void){
    if(is_empty()){
        stack_underflow();
    }
    return *top_ptr--;
}

void stack_overflow(void){
    printf("\nStack overflow!\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("\nStack underflow!\n");
    exit(EXIT_FAILURE);
}
```
