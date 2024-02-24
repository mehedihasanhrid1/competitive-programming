
#include<stdio.h>
int main() 
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    (y%400==0)||(y%100!=0 && y%4==0) ? printf("Leap year.") : printf("Not leap year.");
    return 0;
}


