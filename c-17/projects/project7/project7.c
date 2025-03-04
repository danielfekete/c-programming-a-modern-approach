/*
* remind.c
* Prints a one-month reminder list (dynamic string version)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50 /* Maximum number of reminders */
#define MSG_LEN 60 /* Max length of reminder message */

struct vstring{
    int len;
    char chars[]; /* flexible array member - c99 only */
};

int read_line(char str[], int n);

int main(void){
    struct vstring *reminders[MAX_REMIND];
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, n, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if(day == 0){
            break;
        }
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[i]->chars) < 0){
                break;
            }
        }
        for(j = num_remind; j > i; j--){
            reminders[j] = realloc(reminders[j], sizeof(struct vstring) + reminders[j - 1]->len);
            if(reminders[j] == NULL){
                printf("-- No space left --\n");
                break;
            }
            reminders[j]->len = reminders[j - 1]->len;
            strcpy(reminders[j]->chars, reminders[j - 1]->chars);
        }
        n = 2 + strlen(msg_str) + 1;
        reminders[i] = malloc(sizeof(struct vstring) + n);
        if(reminders[i] == NULL){
            printf("-- No space left --\n");
            break;
        }
        reminders[i]->len = n;
        strcpy(reminders[i]->chars, day_str);
        strcat(reminders[i]->chars, msg_str);

        num_remind++;
    }

    printf("\nDay reminder\n");
    for(i = 0; i < num_remind; i++){
        printf(" %s\n", reminders[i]->chars);
    }

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}

