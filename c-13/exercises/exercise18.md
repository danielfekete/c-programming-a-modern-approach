```c
void remove_filename(char *url) {
    char *p = url;

    for(;*url; url++){
        if(*url == '/'){
            p = url;
        }
    }
    *p= '\0';
}
```
