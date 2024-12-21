```c
bool test_extension(const char *file_name, char *extension){
    while(*file_name++ != '.'){}
    while(*file_name && *extension){
        if(toupper(*file_name++) != toupper(*extension++)){
            return false;
        }
    }
    return true;
}
```
