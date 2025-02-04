```c
struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};
```

a,

```c
int area(struct rectangle r) {
    return (r.lower_right.x - r.upper_left.x)
           * (r.lower_right.y - r.upper_left.y);
}
```

b,

```c
struct point center(struct rectangle r){
    struct point;

    point.x = r.upper_left.x + ((r.lower_right.x - r.upper_left.x) / 2);
    point.y = r.lower_right.y + ((r.upper_left.y - r.lower_right.y) / 2);

    return point;
}


```

c,

```c
struct rectangle move(struct rectangle r, int x, int y){
    r.upper_left.x += x;
    r.lower_right.x += x;
    r.upper_left.y += y;
    r.lower_right.y += y;

    return r;
}
```

d,

```c
bool lies(struct rectangle r, struct point p){
    return p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y >= r.lower_right.y && p.y <= r.upper_left.y;
}
```
