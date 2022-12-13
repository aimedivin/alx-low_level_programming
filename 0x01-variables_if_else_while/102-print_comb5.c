#include <stdio.h>

/**
 * main - entry point
 * Description:  prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, m, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = i; l <= 9; l++)
				{
					for (m = (j + 1); m <= 9; m++)
					{
						putchar(i % 10 + '0');
						putchar(j % 10 + '0');
						putchar(' ');
						putchar(l % 10 + '0');
						if (c == j)
							m++;
						putchar(m % 10 + '0');
						putchar(',');
						putchar(' ');
					}
				}
				if (l == 10 && m == 10)
				{
					j++;
					c = j;
				}
			}
		}
	}
	return (0);
}
