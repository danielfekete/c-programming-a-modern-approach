```c
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
```

a,

```c
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i])); // B
```

b,

```c
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i])); // 1
```
