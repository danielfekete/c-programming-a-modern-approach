#include <ctype.h>
#include <stdio.h>
#include "readline.h"

/**
 * @brief Skips leading white-space characters, then
 * reads the remainder of the input line and
 * stores it in str. Truncates the line if its
 * length exceeds n. Returns the number of
 * characters stored.
 * 
 * @param str 
 * @param n 
 * @return int 
 */

int read_line(char str[], int n){
    int ch, i = 0;

    while(isspace(ch = getchar()) && ch != '\n');
    while(ch != '\n' && ch != EOF){
        if(i < n){
            str[i++] = ch;
        }
        ch = getchar();
    }

    str[i] = '\0';
    return i;
}
