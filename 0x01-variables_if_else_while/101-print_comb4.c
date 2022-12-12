#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int num = 1, num2 = 0, num3 = 2;

	while (num2 <= 7)
	{
		if (num3 % 10 == 0)
		{
			num++;
			num3 += (num + 1);
		}
		if (num % 8 == 0)
		{
			num2++;
		}
		putchar((num2 % 10) + '0');
		putchar((num % 10) + '0');
		putchar((num3 % 10) + '0');

		if (num < 89)
		{
			putchar(',');
			putchar(' ');
		}
		num3++;
	}
	putchar('\n');
	return (0);
}

