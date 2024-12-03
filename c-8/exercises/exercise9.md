```
#define DAYS 30
#define HOURS 24

int day, hour;
float avg = 0.0;

float temperature_readings[DAYS][HOURS]={0.0};

for(day = 0; day < DAYS; day++){
    for(hour = 0; hour < HOURS; hour++){
        avg += temperature_readings[day][hour];
    }
}

avg /= DAYS * HOURS;
```
