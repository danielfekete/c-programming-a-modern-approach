a,

```c
static char **lookup(int level)
```

`static` -> storage class
`char **` -> type specifier
`lookup(int level)` -> declarator

b,

```c
volatile unsigned long io_flags;
```

`volatile` -> type qualifier
`unsigned long` -> type specifier
`io_flags` -> declarator

c,

```c
extern char *file_name[MAX_FILES], path[];
```

`extern` -> storage class
`char * []` -> type specifier
`file_name` -> declarator
`path` -> declarator

d,

```c
static const char token_buf[] = "";
```

`static` -> storage class
`const` -> type qualifier
`char []` -> type specifier
`token_buf` -> declarator
`""` -> initalizer
