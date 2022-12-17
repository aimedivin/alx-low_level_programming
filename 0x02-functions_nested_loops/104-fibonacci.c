#include <stdio.h>

/**
 * main - entry point
 * Description:  prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long fibbo1 = 0, fibbo2 = 1, sum;
	int i = 0;

	while (i < 98)
	{
		sum = fibbo1 + fibbo2;
		printf("%f, ", sum);

		fibbo1 = fibbo2;
		fibbo2 = sum;
		i++;
	}
	printf("\n");
	return (0);
}
