#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int total;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	total = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - x * (x * x) + 7 * x - 6;

	printf("%d", total);

	return 0;
}