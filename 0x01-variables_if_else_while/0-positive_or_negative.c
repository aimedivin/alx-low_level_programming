#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int n, i, j = 1;

	srand(time(0));

	for (i = 0; i < 0; i++)
	{
		n = rand() - RAND_MAX / 2;
		if (j != 0)
		{
			if (n > 0)
			{
				printf("%d is positive\n", n);
				break;
			}
		}
	}
	return (0);
}
