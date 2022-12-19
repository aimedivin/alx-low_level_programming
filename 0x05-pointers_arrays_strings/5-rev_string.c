#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: a charcter pointer
 * Return: void
 */

void rev_string(char *s)
{
	int size = 0, i;

	while (s[size] != '\0')
		size++;

	i = size - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
