#include <stdio.h>
int main()
{
	double a, b, product;
	printf("Enter the two integers:");
	scanf("%lf %lf", &a, &b);
	product = a * b;
	printf("Product = %.2lf", product);
	return 0;
}