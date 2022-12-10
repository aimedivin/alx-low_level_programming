#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: Positive anything is better than negative nothing
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is position\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is Zero\n", n);
	}
	return (0);
}
