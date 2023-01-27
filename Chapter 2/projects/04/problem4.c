#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double amount;
	double tax = 0.05;
	double total, totalTax;

	printf("Enter an amount: ");
	scanf("%lf", &amount);

	total = amount * tax;

	totalTax = amount + total;

	printf("With tax added: $%.2lf", totalTax);

	return 0;
}
