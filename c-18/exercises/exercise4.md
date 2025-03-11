```c
int f(int i){
    static int j = 0;
    return i * j++;
}

```

f never been called before: f(10) -> 0
f called 5 times already: f(10) -> 50
