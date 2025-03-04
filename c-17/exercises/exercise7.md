```c
for(p = first; p != NULL; p = p->next){
    free(p);
}
```

p will become a dangling pointer after the first iteration.

Solution:

```c
p = first;
while(p != NULL){
    temp = p;
    p = p->next;
    free(temp);
}

```
