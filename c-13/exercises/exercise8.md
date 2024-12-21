```c
strcpy(str, "tire-bouchon"); // "tire-bouchon\0"
strcpy(&str[4], "d-or-wi"); // "tired-or-wi\0"
strcat(str, "red?") // "tired-or-wired?\0"
```
