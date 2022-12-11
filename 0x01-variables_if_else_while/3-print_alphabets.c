#include <stdio.h>

/**
 * main - entry point
 * Description: - Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0.
 */

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
