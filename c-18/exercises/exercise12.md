```c
int (*f(float (*)(long), char *))(double);
```

type of f:

f is a function with 2 arguments. The first argument is a pointer to a function which has one long argument and returns a float value, the second is a pointer to a char. f is returns a pointer to a function which has a double argument and which is returns an int value.

`*f(ff, &ch)(2.25)`
