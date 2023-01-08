#include "main.h"
#include <stdbool.h>
#include <string.h>

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
	bool dec;

	dec = false;
	for (; *haystack; haystack++)
	{
		if (*needle == *haystack)
		{
			for (i = 0; i < strlen(needle); i++)
			{
				if (*(haystack + i) == needle[i])
					dec = true;
				else
					dec = false;
			}
			if (dec == true)
				return (haystack);
		}
	}
	return (NULL);
}
