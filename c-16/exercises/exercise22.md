```c
enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
```

a,

```c
const int piece_value[] = {200, 9, 5, 3, 3, 1};
```

b,

```c
const int piece_value[] = {
    [KING] = 200,
    [QUEEN] = 9,
    [ROOK] = 5,
    [BISHOP] = 3,
    [KNIGHT] = 3,
    [PAWN] = 1
};
```
