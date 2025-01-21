```c
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}                               \
```

a,

```c
long long_max(long x, long y){
    return x > y ? x : y;
}
```

b,
because types like unsigned long are two words, so the function name will be incorrect

c, type definition solves the problem

```c
typedef unsigned long ULONG;

GENERIC_MAX(ULONG);
```
