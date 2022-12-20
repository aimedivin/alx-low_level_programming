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
	int i, sum, n;
	char psswrd[100];

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		psswrd[i] = rand() % 78;
		sum = sum + (psswrd[i] + '0');
		putchar(psswrd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}

	}
	putchar(2772 - sum);
	return (0);
}
