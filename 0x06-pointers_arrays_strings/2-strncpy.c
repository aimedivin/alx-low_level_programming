#include "main.h"

/**
 * _strncpy - it copies two strings
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: pointer to theresulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\n' && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
