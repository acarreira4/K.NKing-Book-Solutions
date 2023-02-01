#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double payment = 0.0, loan = 0.0, rate = 0.0;

	printf("Enter amount of loan: ");
	scanf("%lf", &loan);

	printf("Enter interest rate: ");
	scanf("%lf", &rate);

	printf("Enter monthly payment: ");
	scanf("%lf", &payment);

	loan = loan - payment + (loan * rate / 100 / 12);

	printf("Balance remaining after first payment: $%.2f\n", loan);

	loan = loan - payment + (loan * rate / 100 / 12);

	printf("Balance remaining after second payment: $%.2f\n", loan);

	loan = loan - payment + (loan * rate / 100 / 12);

	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}