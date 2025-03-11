a, legal

```c
char c = 65;
```

b, illegal since i is a variable not a constant

```c
static int i = 5; j = i * i;
```

c, legal

```c
double d = 2 * PI;
```

d, legal in c99 since PI is a constant

```c
double angles[] = {0, PI / 2, PI, 3 * PI / 2};
```
