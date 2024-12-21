```c
void censor(char str[]){
    int position = 0;
    char *p = str;

    for(;*p != '\0'; p++){
        if((position == 0 && *p == 'f') || (position == 1 && *p == 'o')){
            position++;
        }else if(position == 2 && *p == 'o'){
            *p - position = 'x';
            *p - 1 = 'x';
            *p = 'x';
            position = 0;
        }else{
            position = 0;
        }
    }
}
```
