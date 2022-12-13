#include <stdio.h>

/**
 * main - Entry point
 * Description: Even Liber Abbaci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long fibbo1 = 0, fibbo2 = 1, s;
	double sum;

	while (true)
	{
		s = fibbo1 + fibbo2;
		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			sum = sum + s;

		fibbo1 = fibbo2;
		fibbo2 = s;
	}
	print("%.0f\n", sum);

	return (0);
}
