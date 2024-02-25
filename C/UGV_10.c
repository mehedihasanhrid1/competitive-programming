
#include<stdio.h>
int main() 
{
    int start, end, i, sum = 0;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++) 
    {
        if (i % 3 == 0 && i % 5 == 0) 
        {
            sum += i;
        }
    }
    printf("Summation of numbers divisible by both 3 and 5: %d\n", sum);
    return 0;
}


