#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description:
 * Return: 0
 */

int main(void)
{
	int i, j, sum;
	char psswrd[100];

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		psswrd[i] = rand() % 78;
		sum = sum + (psswrd[i] + '0');
		putchar(psswrd[i]);
		if ((2772 - sum) < 78)
		{
			j = 2772 - sum;
			sum = sum + j;
			putchar(j + '0');
			break;
		}

	}
	return (0);
}
