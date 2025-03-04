```c

int sum(int (*f)(int), int start, int end){
    int s = 0;
    while(start <= end){
        s += (*f)(start);
        start++;
    }
    return s;
}

```
