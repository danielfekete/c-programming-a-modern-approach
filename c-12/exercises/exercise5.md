```c
int a[SIZE], *p;

p = a;

p == a[0] // a, illegal
p == &a[0] // b, true
*p == a[0] // c, true
p[0] == a[0] // d, true
```
