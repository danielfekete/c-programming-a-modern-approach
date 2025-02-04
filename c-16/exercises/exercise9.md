```c
struct color{
    int red;
    int green;
    int blue;
};
```

a,

```c
struct color make_color(int red, int green, int blue){
    struct color c;


    c.red = red > 0 ? (red < 255 ? red : 255) : 0;
    c.green = green > 0 ? (green < 255 ? green : 255) : 0;
    c.blue = blue > 0 ? (blue < 255 ? blue : 255) : 0;

    return c;
}

```

b,

```c
int getRed(struct color c){
    return c.red;
}

```

c,

```c
int equal_color(struct color c1, struct color c2){
    return c1.red == c2.red && c1.blue == c2.blue && c1.green == c2.green;
}

```

d,

```c
int get_brighter_value(int value){
    if(value < 3){
        return 3;
    }
    value = value / 0.7;
    if(value > 255){
        return 255;
    }
    return value;
}

struct color brighter(struct color c){

    c.red = get_brighter_value(c.red);
    c.green = get_brighter_value(c.green);
    c.blue = get_brighter_value(c.blue);

    return c;
}

```

e,

```c
int get_darker_value(int value){
    if(value < 3){
        return 3;
    }
    value = value * 0.7;
    if(value > 255){
        return 255;
    }
    return value;
}

struct color brighter(struct color c){

    c.red = get_darker_value(c.red);
    c.green = get_darker_value(c.green);
    c.blue = get_darker_value(c.blue);

    return c;
}

```
