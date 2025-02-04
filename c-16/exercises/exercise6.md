```c
struct time{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds){
    time.seconds = total_seconds % 60;
    time.minutes = total_seconds / 60 % 60;
    time.hours = total_seconds / 60 / 60;

    return time;
}
```
