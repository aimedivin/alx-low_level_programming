#include "main.h"

/**
 * _strcat - check the code
 * @dest: First argument
 * @src: Second argument
 * Return: a pointer of the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	i -= 1;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
