#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int radius;
	double total;


	printf("Enter the radius of the sphere: ");
	scanf("%d", &radius);

	total = (4.0f / 3.0f) * 3.1415 * (radius * radius * radius);

	printf("%.2lf", total);

	return 0;
}