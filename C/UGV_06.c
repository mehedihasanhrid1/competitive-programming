
#include <stdio.h>

int main() {
    int a;
    float b, c, d;
    printf("Enter employee's ID: ");
    scanf("%d", &a);
    printf("Enter total worked hours in a month: ");
    scanf("%f", &b);
    printf("Enter the amount received per hour: ");
    scanf("%f", &c);
    d = b * c;
    printf("Employee ID: %d\n", a);
    printf("Salary: %.2f\n", d);
    return 0;
}

