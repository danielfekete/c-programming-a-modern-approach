```c
struct shape{
    int shape_kind; /* RECTANGLE or CIRCLE */
    struct point center;
    union {
        struct{
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;
```

a,

```c
 s.shape_kind = RECTANGLE;
```

Correct if RECTANGLE is defined.

b,

```c
 s.center.x = 10;
```

Correct.

c,

```c
 s.height = 25;
```

Incorrect, correct version:

```c
 s.u.rectangle.height = 25;
```

d,

```c
 s.u.rectangle.width = 8;
```

Correct.

e,

```c
 s.u.circle = 5;
```

Incorrect, correct version:

```c
 s.u.circle.radius = 5;
```

e,

```c
 s.u.radius = 5;
```

Incorrect, correct version:

```c
 s.u.circle.radius = 5;
```
