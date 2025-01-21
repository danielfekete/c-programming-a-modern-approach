a,

Original:

```c
#define AVG(x,y) (x - y)/2
AVG(5 + 5, 3 + 3); // 10
```

Fixed:

```c
#define AVG(x,y) ((x)-(y))/2
AVG(5 + 5, 3 + 3); // 2
```

b,

Original:

```c
#define AREA(x,y) (x) * (y)
6/AREA(2,3); // 9
```

Fixed:

```c
#define AREA(x,y) ((x) * (y))
6/AREA(2,3); // 1
```
