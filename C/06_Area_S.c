#include <stdio.h>

int main() {
    float area, r, l, w, b, h;
    int a;
    printf("Press 1 for area of a circle\n");
    printf("Press 2 for area of a rectangle\n");
    printf("Press 3 for area of a triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.1416 * r * r;
            printf("Area is: %f\n", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f%f", &l, &w);
            area = l * w;
            printf("Area is: %f\n", area);
            break;
        case 3:
            printf("Enter height and base: ");
            scanf("%f%f", &h, &b);
            area = 0.5 * h * b;
            printf("Area is: %f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
