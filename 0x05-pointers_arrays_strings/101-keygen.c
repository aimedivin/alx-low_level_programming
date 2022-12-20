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
	int i;
	char psswrd[30];

	srand(time(NULL));
	for (i = 0; i < 30; i++)
	{
		psswrd[i] = 33 + rand() % 91;
		sum = sum + psswrd[i];
		printf("%c", psswrd[i]);
	}
	putchar(2772 - sum);
	return (0);
}
