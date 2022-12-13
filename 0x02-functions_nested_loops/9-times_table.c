#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0, j, n;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
