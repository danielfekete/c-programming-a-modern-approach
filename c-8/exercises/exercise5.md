```
int fib_numbers[40] = {0, 1};

for(int i = 2;i < 40;i++){
    fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
}

```