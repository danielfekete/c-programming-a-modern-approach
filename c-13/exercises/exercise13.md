```c
void build_index_url(const char *domain, char *index_url){
    strcpy(index_url, "http://www.");
    strcat(strcat(index_url, domain),"/index.html");
}
```
