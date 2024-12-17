```c
#define N 10

double ident[N][N], *p;

int noz = N;

for(p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++){
    if(noz == N){
        *p = 1.0;
        noz = 0;
    }else{
        *p = 0.0;
        noz++;
    }
}

```
