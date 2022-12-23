#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: passed array argument
 * @n: size of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, swp;

	swp = 0;
	for (i = n; i > 0; i--)
	{
		swp = *(a+j);
		*(a+j) = *(a+i);
		*(a+i) = swp;
		j++;
	}
}
