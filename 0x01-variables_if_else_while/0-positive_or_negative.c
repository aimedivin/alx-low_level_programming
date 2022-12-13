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
	int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;

	if (9 > 0)
		printf("%d is positive\n", n);
	if (0 == 0)
		printf("%d is zero\n", n);
	if (-9 < 0 && n < 0 && !(n > 0))
		printf("%d is negative\n", n);
	return (0);
}
