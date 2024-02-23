#include <stdio.h>

int main() {
    // Expression a) x = 4 + 9 * 10
    int x_a = 4 + 9 * 10; // x_a = 94

    // Expression b) x = 4 * 3 / 6 * 2
    int x_b = 4 * 3 / 6 * 2; // x_b = 4

    // Expression c) y = 5 + 2 / 2 * 3
    int y = 5 + 2 / 2 * 3; // y = 8

    // Expression d) p = 5 % 2 >= 3 / 6 * 2
    int p = 5 % 2 >= 3 / 6 * 2; // p = 1

    // Expression e) c = 6 / 3 && 4 - 2 && 2
    int c = 6 / 3 && 4 - 2 && 2; // c = 1

    // Printing the results
    printf("a) x = %d\n", x_a);
    printf("b) x = %d\n", x_b);
    printf("c) y = %d\n", y);
    printf("d) p = %d\n", p);
    printf("e) c = %d\n", c);

    return 0;
}
