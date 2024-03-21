#include <stdio.h>
 
int main() {
    int n;
    float hour,rate,salary;
    scanf("%d",&n);
    scanf("%f%f",&hour,&rate);
    salary = hour*rate;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %0.2f\n",salary);
    return 0;
}