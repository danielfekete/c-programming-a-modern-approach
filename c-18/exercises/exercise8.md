a,

```c
char (*x[10])(int);
```

type of x:

1. array of
2. pointers to
3. functions with int argument
4. returning char

b,

```c
int (*x(int))[5];
```

type of x:

1. function
2. returns a pointer to
3. array of
4. integers

c,

```c
float *(*x(void))(int);
```

type of x:

1. function
2. returns a pointer to
3. a function
4. with int argument
5. that returns a pointer to
6. a function

d,

```c
void (*x(int, void (*y)(int)))(int);
```

type of x:

1. function with
2. two arguments
3. that returns a pointer to
4. a function
5. with int argument
6. no return value

type of y:

1. pointer to
2. a function
3. with int argument
4. no return value
