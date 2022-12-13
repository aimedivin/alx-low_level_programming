#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: no return_type
 */

void print_alphabet(void)
{
	int let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}
	_putchar('\n');
}
