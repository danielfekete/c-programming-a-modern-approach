a,

```c
#define DISP(f, x) printf(#f "(%g) = %g\n", x, f(x))
```

b,

```c
#define DISP2(f, x, y) printf(#f "(%g, %g) = %g\n", x, y, f(x, y))
```
