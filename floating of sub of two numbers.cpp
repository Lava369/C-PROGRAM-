#include <stdio.h>
int main()
{
	double a, b, sub;
	printf("Enter the two integers:");
	scanf("%lf %lf", &a, &b);
	sub = a - b;
	printf("sub = %.2lf", sub);
	return 0;}