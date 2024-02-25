
#include<stdio.h>
int main() 
{
    int start, end, i, sum_even = 0, sum_odd = 0;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++) 
    {
        if (i % 2 == 0) 
        {
            sum_even += i;
        } 
        else 
        {
            sum_odd += i;
        }
    }
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}


