char c = '\1'
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;

- a, c \* i
  49 \* -3 -> -147 int
- b, s + m
  2 + 5 -> 5, long
- c, f / c
  6.5f / 49 -> 0.132 float
- d, d / s
  7.5 / 2 -> 3.75 double
- e, f - d
  6.5f - 7.5 -> -1.0 double
- f, int (f)
  6 int
