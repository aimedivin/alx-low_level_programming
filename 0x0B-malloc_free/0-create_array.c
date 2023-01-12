#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size for the array
 * @c: a character to be initialized to array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size);
	
	if (arr == NULL)
		return (NULL);
	arr[0] = c;
	return (arr);
}

