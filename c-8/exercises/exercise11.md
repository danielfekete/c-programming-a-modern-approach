```
define BOARD_SIZE 8;

int i, j;

char checker_board[BOARD_SIZE][BOARD_SIZE] = {0};

for(i = 0; i < BOARD_SIZE; i++){
    for(j = 0; j < BOARD_SIZE; j++){
            checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
    }
}

```
