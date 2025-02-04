```c

union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;

```

The compiler will occupy 28 bytes for u.
