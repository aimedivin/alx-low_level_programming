#include <stdio.h>

/**
 * main - entry point
 * Description: prints the largest prime factor of the number
 * Return: 0
 */

int main(void)
{
	long long int num, pfac;

	num = 612852475143;
	for (pfac = 2; pfac <= n; pfac++)
	{
		if (num % pfac == 0)
		{
			num = num / pfac;
			pfac--;
		}
	}
	printf("%ld\n", pfac);
	return (0);
}
