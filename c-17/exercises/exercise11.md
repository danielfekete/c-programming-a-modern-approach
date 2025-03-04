```c
int count_occurances(struct node *list, int n){
    int count = 0;
    struct node *p;

    for(p = list; p != NULL; p = p->next){
        if(p->value == n){
            count++;
        }
    }


    return count;
}
```
