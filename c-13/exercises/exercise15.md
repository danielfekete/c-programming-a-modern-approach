```c
int f(char *s, char *t){
    char *p1, *p2;

    for(p1 = s; *p1; p1++){
        for(p2 = t; *p2; p2++){
            if(*p1 == *p2){
                break;
            }
        }
        if(*p2 == '\0'){
            break;
        }
    }

    return p1 - s;
}
```

a, 3
b, 0
c, the position of the first character in s that is not also in t
