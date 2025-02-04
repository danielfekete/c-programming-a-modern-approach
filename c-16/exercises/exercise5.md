```c
struct date{
    int month;
    int day;
    int year;
};
```

a,

```c
int day_of_year(struct date d){
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = date.day;

    for(int i = 1; i < d.month; i++){
        day += days[i - 1];
    }

    return day;
}
```

b,

```c
int compare_dates(struct date d1, struct date d2){
    if(d1.year == d2.year && d1.month == d2.month && d1.day == d2.day){
        return 0;
    }
    if((d1.year < y2.year) ||
       (d1.year == d2.year && d1.month < d2.month) ||
       (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)){
        return -1;
    }
    return 1;
}
```
