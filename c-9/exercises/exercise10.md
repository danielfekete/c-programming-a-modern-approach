```
int largest(int a[],int n){
    int max = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    return max;
}
```

```
int average(int a[],int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum / n;
}
```

```
int positive(int a[],int n){
    int num_positive = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            num_positive++;
        }
    }
    return num_positive;
}
```
