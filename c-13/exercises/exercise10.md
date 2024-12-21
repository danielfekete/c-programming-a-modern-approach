```c
char *duplicate(const char *p){
    char *q;

    strcpy(q, p);
    return q;
}
```

q will not be accessible outside the scope of the function
