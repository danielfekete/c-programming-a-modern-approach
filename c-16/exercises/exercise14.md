```c
struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
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
#include <math.h>

int area(struct shape s) {
    if(s.shape_kind == RECTANGLE){
        return s.u.rectangle.height * s.u.rectangle.width;
    }
    return s.u.circle.radius * s.u.circle.radius * M_PI;
}
```

b,

```c
struct shape move(struct shape s, int x, int y) {
    s.point.y += y;
    s.point.x += x;

    return s;
}
```

c,

```c
struct shape scale(struct shape s, double c) {
    if(s.shape_kind == RECTANGLE){
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }else{
        s.u.circle.radius *= c;
    }
    return s;
}
```
