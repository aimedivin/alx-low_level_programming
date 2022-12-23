#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first argument
 * @s2: second argument
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for  (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1 == '\0' && s2 == '\0')
			return (0);
	}
	return (*s2 - *s1);
}
