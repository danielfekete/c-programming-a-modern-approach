```c
strcpy(s1, "computer"); // "computer\0"
strcpy(s2, "science"); // "science\0"
if(strcmp(s1, s2) < 0){
    strcat(s1, s2); // "computerscience\0"
}else{
    strcat(s2, s1);
}
s1[strlen(s1) - 6] = '\0'; // "computers\0"
```

s1 will be "computers\0"
