
#include<stdio.h>

int main() {
    int e$ID;

    printf("Enter employee's ID: ");
    scanf("%d", &e$ID);

    if (e$ID % 2 == 0) {
        printf("Employee with ID %d is okay.\n", e$ID);
    } else {
        printf("Employee with ID %d is not okay.\n", e$ID);
    }

    return 0;
}


