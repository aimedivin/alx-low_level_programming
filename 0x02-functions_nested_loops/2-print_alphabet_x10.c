#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: no return type
 */

void print_alphabet_x10(void)
{
	char let;
	int i = 0;

	while (i < 10)
	{
		let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		i++;
		_putchar('\n');
	}
}
