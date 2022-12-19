#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
