#include <stdio.h>

/**
 * main - entry point
 * Description:  prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k, l, m, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					if (!(i == 9 && j == 8))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
