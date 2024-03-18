#include <stdio.h>
 
int main() {
 
    float first,second,avg;
    scanf("%f%f",&first,&second);
    avg=(first*3.5+second*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5f\n",avg); 
    return 0;
}