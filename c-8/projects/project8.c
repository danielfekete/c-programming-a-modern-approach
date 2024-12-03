/*
* project7.c
* Program that read a 5*5 array of integers
* then prints the ro sums and the
* column sums
*/
#include <stdio.h>

#define STUDENTS 5
#define QUIZZES 5
int main(void){
    int grades[STUDENTS][QUIZZES]={0};
    int high, low, total;
    

    for(int student = 0; student < STUDENTS; student++){
        printf("Enter quiz grades for student %d: ",student + 1);
        for(int quiz = 0; quiz < QUIZZES; quiz++){
            scanf("%d", &grades[student][quiz]);
        }
    }

    printf("Students average score: ");
    for(int student = 0; student < STUDENTS; student++){
        total = 0;
        for(int quiz = 0; quiz < QUIZZES; quiz++){
            total += grades[student][quiz];
        }
        printf(" %d", total / QUIZZES);
    }

    printf("\nQuizes average/low/high score:");
    for(int quiz = 0; quiz < QUIZZES; quiz++){
        total = 0;
        high = 0;
        low = 100;
        for(int student = 0; student < STUDENTS; student++){
            total += grades[student][quiz];
            if(grades[student][quiz] > high){
                high = grades[student][quiz];
            }
            if(grades[student][quiz] < low){
                low = grades[student][quiz];
            }
        }
        printf(" %d/%d/%d", total / STUDENTS, low, high);
    }
    printf("\n");

    return 0;
}
