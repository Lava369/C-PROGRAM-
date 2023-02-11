#include <stdio.h>
int main()
{
	int a, b, sum;
	printf("Enter the integers:");
	scanf("%d %d", &a, &b, &sum);
	sum = a + b;
	printf("The sum of two numbers: %d + %d = %d", a, b, sum);
	return 0;
}
