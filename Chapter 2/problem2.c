#include <stdio.h>

int main(void)
{
	int radius = 10;
	double total;

	total = (4.0f / 3.0f) * 3.1415 * (radius * radius * radius);

	printf("%.2lf", total);

	return 0;
}