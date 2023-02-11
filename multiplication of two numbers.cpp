#include <stdio.h>
int main()
{
	int number1, number2, product;
	printf("Enter the two integers:");
	scanf("%d %d", &number1, &number2, &product);
	product = number1 * number2;
	printf("The product of two inegers are: %d * %d = %d", number1, number2, product);
	return 0;
}