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
	int n, i;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;

	if (n > 0)
		printf("98 is positive\n");
	if (n == 0)
		printf("0 is zero\n");
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
