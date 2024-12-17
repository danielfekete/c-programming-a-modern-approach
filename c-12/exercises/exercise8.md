```c
void store_zeros(int a[], int n){
    int *p;
    for(p = &a[0]; p < &a[n]; p++){
        *p = 0;
    }
}
```
