#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_ptuchar(s);
		_puts_recursion(s);
	}
	_putchar('\n');
}
