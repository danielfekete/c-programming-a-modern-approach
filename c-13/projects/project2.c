/*
* project2.c
* Prints a one-month reminder list
*/
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define DAY_LEN 6
#define TIME_LEN 6
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + DAY_LEN + TIME_LEN + 2];
    char day_str[DAY_LEN], time_str[TIME_LEN], msg_str[MSG_LEN + 1];
    int month, day, hour, minute, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }
        printf("Enter month/day, 24 hour time and reminder: ");
        scanf("%2d/%2d", &month, &day);
        if(month == 0){
            break;
        }
        if(day <= 0 || day > 31 || month < 0 || month > 12){
            continue;
        }
        sprintf(day_str, "%2d/%2d", month, day);
        scanf("%2d:%2d", &hour, &minute);
        if(hour < 0 || hour > 23 || minute < 0 || minute > 59){
            continue;
        }
        sprintf(time_str, "%2d:%2d", hour, minute);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[i]) < 0 || (strcmp(day_str, reminders[i]) == 0 && strcmp(time_str, reminders[i]) < 0)){
                break;
            }
        }
        for(j = num_remind; j > i; j--){
            strcpy(reminders[j],reminders[j - 1]);
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay reminder\n");
    for(i = 0; i < num_remind; i++){
        printf(" %s\n",reminders[i]);
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

