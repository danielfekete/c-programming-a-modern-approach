```
int digit(int n, int k){
    int remainder;
    while(n > 0){
        remainder = n % 10;
        n = n / 10;
        k--;
        if(k == 0){
            return remainder;
        }
    }
    return 0;
}
```
