#include "main.h"

/**
 * void swap_int(int *a, int *b) - swaps the values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*a = m;
}
