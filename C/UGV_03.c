
#include <stdio.h>

int main() {
    int age, education_level;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your education level (1 for high school, 2 for college): ");
    scanf("%d", &education_level);

    if (age >= 18) {
        printf("Age is Okey.\n");

        if (education_level == 2) {
            printf("You are Eligible.\n");
        } else {
            printf("You are not Eligible.\n");
        }
    } else {
        printf("Age is not Okey.\n");
    }

    return 0;
}


