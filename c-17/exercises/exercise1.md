```c

void *my_malloc(size_t n){
    void *p;
    if((p = malloc(n)) == NULL){
        printf("Error: malloc failed"),
        exit(EXIT_FAILURE);
    }
    return p;
}

```
