#include <stdio.h>
int main()
{
	int number1, number2, sum;
	printf("Enter the two integers:");
	scanf("%d %d", &number1, &number2, &sum);
	sum = number1 + number2;
	printf("The sum of two integers are: %d + %d = %d", number1, number2, sum);
	return 0;
}