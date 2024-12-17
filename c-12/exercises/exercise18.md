```c
int evaluate_position(char board[8][8]){
    int white = 0, black = 0, value, *p;

    for(p = board; p < board + 64; p++){
        switch(toupper(*p)){
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
            if(islower(*p)){
                black += value;
            }else{
                white += value;
            }
    }

    return white - black;
}
```
