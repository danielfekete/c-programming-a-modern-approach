a,

```c
void capitalize(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            str[i] = toupper(str[i]);
        }
    }
}
```

b,

```c
void capitalize(char str[]){
    char *p = str;
    for(;*p != '\0';p++){
        if(isalpha(*p)){
            *p = toupper(*p);
        }
    }
}
```
