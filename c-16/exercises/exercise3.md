a,

```c
struct complex{
    double real;
    double imaginary;
};
```

b,

```c
struct complex c1, c2, c3;
```

c,

```c
struct complex make_complex(double real, double imaginary){
    struct complex c;

    c.real = real;
    c.imaginary = imaginary;
    return c;
}
```

d,

```c
struct complex add_complex(struct complex c1, struct complex c2){
    struct complex c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}
```
