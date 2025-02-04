```c

enum {NORTH, SOUTH, EAST, WEST} direction;

int x, y;

switch(direction){
    case EAST:
        x++;
        break;
    case WEST:
        x--;
        break;
    case SOUTH:
        y++;
        break;
    case NORTH:
        y--;
        break;
    default:
        break;
}

```
