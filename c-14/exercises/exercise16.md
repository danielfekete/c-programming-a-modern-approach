```c
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
```

```c
IDENT(foo)
```

```c
#pragma ident "foo"
```
