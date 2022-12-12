#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int num = 1, num2 = 0, num3 = 2;

	while (num < 90)
	{
		if (num3 % 10 == 0)
		{
			num2++;
			num++;
			num3 += (num + 1);
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

