/*
* project1.c
* A program that asks the user to enter an international dialing code and then looks it up in the country_codes array
*/

#include <stdio.h>
#define ARRAY_LEN(x) ((int) (sizeof((x)) / sizeof((x)[0])))

struct dialing_code {
    char *country;
    int code;
};

int main(void){
    int code;
    const struct dialing_code country_codes[]={
     {"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Colombia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63},
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}
    };

    printf("Enter an international dialing code: ");
    scanf("%d", &code);

    for(int i = 0; i < ARRAY_LEN(country_codes); i++){
        if(country_codes[i].code == code){
             printf("%d is the code for %s.\n", code, country_codes[i].country);
             return 0;
        }
    }

    printf("There is no such code in the array.\n");
}
