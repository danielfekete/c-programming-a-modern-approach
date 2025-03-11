```c

extern float a;

void f(register double b){
    static int c;
    auto char d;
}

```

- `a` -> static storage duration, file scope, external linkage
- `b` -> automatic storage duration, block scope, no linkage
- `c` -> static storage duration, file scope, no linkage
- `d` -> automatic storage duration, block scope, no linkage
