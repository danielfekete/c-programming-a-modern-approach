a,

```
for(i = 0; i < 10; i++){
    ...
}
```

b,

```
for(i = 0; i < 10; ++i){
    ...
}
```

c,

```
for(i = 0; i++ < 10;){
    ...
}
```

Solution: a is equivalent to b but they aren't equivalent to c because in c i increments at the begining of the cycle not at the end.
