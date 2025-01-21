a,

```c
#define CHECK(x, y, n) (x) >= 0 && (x) <= ((n) - 1) && (y) >= 0 && (y) <= ((n) - 1) ? 1 : 0
```

b,

```c
#define MEDIAN(x, y, z)     \
do{                         \
if(x <= y && y <= z){       \
    return y;               \
}else if(x >= y && x <= z){ \
    return x;               \
}                           \
return z;                   \
}while(0)                   \
```

c,

```c
#define POLYNOMIAL(x) (3 * ((x)*(x)*(x)*(x)*(x)) + 2 * ((x)*(x)*(x)*(x)) - 5 * ((x)*(x)*(x)) - (x) * (x) + 7 * x - 6)
```
