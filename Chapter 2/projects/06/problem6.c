#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int total;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("%d", total);

	return 0;
}