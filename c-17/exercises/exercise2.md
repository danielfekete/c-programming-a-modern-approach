```c

char *duplicate(char * str){
    char *p = (char  *) malloc(strlen(str) + 1);

    if(p == NULL){
        return NULL;
    }
    strcpy(p, str);
    return p;
}

```
