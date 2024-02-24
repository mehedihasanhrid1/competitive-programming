
#include <stdio.h>

int main() {
    int amount, thousand, five_hun, hundred, ten;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    thousand = amount / 1000;
    amount = amount % 1000;
    five_hun = amount / 500;
    amount = amount % 500;
    hundred = amount / 100;
    amount = amount % 100;
    ten = amount / 10;
    printf("The notes you need to give:\n");
    printf("1 thousand taka: %d\n", thousand);
    printf("5 hundred taka: %d\n", five_hun);
    printf("1 hundred taka: %d\n", hundred);
    printf("10 taka: %d\n", ten);
    return 0;
}




