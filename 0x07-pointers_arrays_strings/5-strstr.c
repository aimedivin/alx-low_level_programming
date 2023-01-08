#include "main.h"

/**
 * _strstr - that locates a substring
 * @haystack: main string
 * @needle: the substring to find in main string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int dec;

	dec = 0;
	for (; *haystack; haystack++)
	{
		if (*needle == *haystack)
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*(haystack + i) == needle[i])
					dec = 1;
				else
				{
					dec = 0;
					break;
				}
			}
			if (dec == 1)
				return (haystack);
		}
	}
	return ('\0');
}
