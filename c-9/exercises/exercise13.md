```c
int evaluate_position(char board[8][8]){
    int white = 0, black = 0, value;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            switch(toupper(board[i][j])){
                case 'Q':
                    value = 9;
                    break;
                case 'R':
                    value = 5;
                    break;
                case 'B':
                    value = 3;
                    break;
                case 'N':
                    value = 3;
                    break;
                case 'P':
                    value = 1;
                    break;
                default:
                    value = 0;
            }
            if(islower(board[i][j])){
                black += value;
            }else{
                white += value;
            }
        }
    }

    return white - black;
}
```
