```c
void get_extension(const char *file_name, char *extension){
    while(file_name){
        if(*file_name++ == '.'){
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}
```
