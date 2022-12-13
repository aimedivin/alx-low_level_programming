#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int fibbo1 = 0, fibbo2 = 1, s;

	while (i < 50)
	{
		s = fibbo1 + fibbo2;
		printf("%d", s);

		fibbo1 = fibbo2;
		fibbo2 = s;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}

	return (0);
}
