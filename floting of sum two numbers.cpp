#include <stdio.h>
int main()
{
	double a, b, sum;
	printf("Enter two integers:");
	scanf("%lf %lf", &a, &b);
	sum = a + b;
	printf("sum = %.2lf", sum);
	return 0;
}