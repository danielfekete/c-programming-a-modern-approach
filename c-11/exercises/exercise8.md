```
int *find_largest(int a[], int n){
    int *max = &a[0];

    for(int i = 0; i < n; i++){
        if(*max > a[i]){
            max = &a[i];
        }
    }

    return max;
}
```
