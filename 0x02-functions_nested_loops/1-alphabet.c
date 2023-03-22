#include "main.h"

/**
 * print_alphabet - function that prints alphabet
 *
 * Description: prints all the lowercase
 * alphabet followed by a newline
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
