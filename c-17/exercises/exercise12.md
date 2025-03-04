```c
struct node *find_last(struct node *list, int n){
    struct node *last, *p;

    for(p = list, last = NULL; p != NULL; p = p->next){
        if(p->value == n){
            last = p;
        }
    }

    return last;
}
```
