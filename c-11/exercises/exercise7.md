```
void split_date(int day_of_year, int year, int *month, int *day){
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        days[1] = 29;
    }

    for(int i = 0; i < 12; i++){
        sum += days[i];
        if(sum > day_of_year){
            *month = i + 1;
            *day = days[i] - (sum - day_of_year);
            break;
        }
    }
}
```
