```c
int find_largest(const int *a, int n){
    int largest = *a, *p;
    for(p = a; p < a + n; p++){
        if(*p > largest){
            largest = *p;
        }
    }
    return largest;
}
```
