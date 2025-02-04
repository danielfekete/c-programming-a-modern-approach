```c
struct {
    double a;
    union{
        char b[4];
        double c;
        int d;
    }e;
    char f[4];
}s;
```

The compiler will occupy 20 bytes for s.
