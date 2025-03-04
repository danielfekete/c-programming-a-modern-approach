```c
struct node *insert_into_ordered_list(struct node *list, struct node *new_node){
    struct node *cur = list, *prev = NULL;

    while(cur != NULL && cur->value <= new_node->value){
        prev = cur;
        cur = cur -> next;
    }

    if(prev == NULL){
        // Empty list
        cur = new_node;
    }else if(cur == NULL){
        // List only has one item
        prev->next = new_node;
    }else{
        prev->next = new_node;
        new_node->next = cur;
    }

    return list;
}
```
