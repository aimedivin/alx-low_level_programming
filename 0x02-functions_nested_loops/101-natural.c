#include <stdio.h>

/**
 * main - we list all the natural numbers
 * with some conditions
 *
 * Return: 0
 */

int main(void)
{
	int i = 0, s = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
		i++;
	}
	printf("%d\n", s);

	return (0);
}
