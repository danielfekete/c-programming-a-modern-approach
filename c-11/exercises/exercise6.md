```
void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n  - 1 - i; j++){
            if(a[j] < a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    *largest = a[0];
    *second_largest = a[1];
}
```
