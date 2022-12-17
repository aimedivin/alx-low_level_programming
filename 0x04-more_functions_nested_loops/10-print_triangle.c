#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j >= 1; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
