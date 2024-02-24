#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 80) {
        printf("Grade: A+\n");
    } else if (mark >= 75) {
        printf("Grade: A\n");
    } else if (mark >= 70) {
        printf("Grade: A-\n");
    } else if (mark >= 65) {
        printf("Grade: B+\n");
    } else if (mark >= 60) {
        printf("Grade: B\n");
    } else if (mark >= 50) {
        printf("Grade: C+\n");
    } else if (mark >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

