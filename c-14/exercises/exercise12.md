```c
#define M 10
```

a, will not fail

```c
#if M
```

b, will not fail

```c
#ifdef M
```

c, will fail, because M is defined

```c
#ifndef M
```

d, will not fail

```c
#if defined(M)
```

e, will fail because M is not defined

```c
#if !defined(M)
```
