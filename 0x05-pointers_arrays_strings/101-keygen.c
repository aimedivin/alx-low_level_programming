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
	sum = 0;
	for (i = 0; i < 30; i++)
	{
		psswrd[i] = 33 + rand() % 91;
		printf("%c", psswrd[i]);
	}
	return (0);
}
