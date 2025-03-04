```c
struct point{int x, y;};
struct rectangle{struct point upper_left, lower_right;};
struct rectangle *p;

// upper left -> 10, 25
// lower right -> 20, 15

p = (struct rectangle) malloc(sizeof(struct rectangle));

p->upper_left = {10, 25};
p->lower_right= {20, 15};

```
