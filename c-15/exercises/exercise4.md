a,
"Output if Debug is defined:"
"Value of i : 1"
"Value of j : 2"
"Value of k : 3"
"Value of i + j : 3"
"Value of 2 \* i + j - k : 1"

b,
"Output if Debug is not defined:"

c,
Because of the ifdef condition, in the case of a DEBUG is defined in the case of b DEBUG is not defined.

d,
Not necessary, we can write it inside debug.h before the ifdef condition the effect will be the same
