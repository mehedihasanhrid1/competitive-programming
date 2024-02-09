#include<stdio.h>
int main()
{
	int a,b,c,d,e,g;
	float f;
	printf("Enter the first number: ");
	scanf("%d", &a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	c= a+b;
	d= a-b;
	e = a*b;
	f = a/b;
	g = a%b;
	
	printf("Addition = %d\n", c);
	printf("Substraction = %d\n", d);
	printf("Multiplication = %d\n", e);
	printf("Division = %.2f\n", f);
	printf("Reminder = %d\n", g);
	
	return 0;
}