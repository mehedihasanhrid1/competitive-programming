
#include<stdio.h>

int main() {
    int eID;

    printf("Enter employee's ID: ");
    scanf("%d", &eID);

    if (eID % 2 == 0) {
        printf("Employee with ID %d is okay.\n", eID);
    } else {
        printf("Employee with ID %d is not okay.\n", eID);
    }

    return 0;
}


