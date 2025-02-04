```c
struct fraction{
    int numerator;
    int denominator;
}
```

a,

```c
struct fraction lowest_terms(struct fraction f){
    int remainder, m = f.numerator, n = f.denominator;
    while(n > 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }
    f.numerator = f.numerator / m;
    f.denominator = f.denominator / m;

    return f;
}
```

b,

```c
struct fraction add(struct fraction f1, struct fraction f2){
    struct fraction f3;

    f3.numerator = f1.denominator * f2.numerator + f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.denominator;


    return lowest_terms(f3);
}
```

c,

```c
struct fraction subtract(struct fraction f1, struct fraction f2){
    struct fraction f3;

    f3.numerator = f1.denominator * f2.numerator - f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.denominator;


    return lowest_terms(f3);
}
```

d,

```c
struct fraction multiply(struct fraction f1, struct fraction f2){
    struct fraction f3;

    f3.numerator = f1.numerator * f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;


    return lowest_terms(f3);
}
```

e,

```c
struct fraction multiply(struct fraction f1, struct fraction f2){
    struct fraction f3;

    f3.numerator = f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.numerator;


    return lowest_terms(f3);
}
```
