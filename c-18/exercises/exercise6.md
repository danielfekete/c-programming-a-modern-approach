```c
void print error(const char *message){
    int n = 1;
    printf("Error %d: %s\n", n++, message);
}
```

Solution:

```c
void print error(const char *message){
    static int n = 1;
    printf("Error %d: %s\n", n++, message);
}
```
