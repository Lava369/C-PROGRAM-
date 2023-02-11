#include <stdio.h>
int main()
{
	double a, b, divison;
	printf("Enter the two integers:");
	scanf("%lf %lf", &a, &b);
	divison = a / b;
	printf("divison = %.2lf", divison);
	return 0;
}
