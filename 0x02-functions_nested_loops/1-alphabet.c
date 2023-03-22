#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: o
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * 
 * print_alphabet - function that prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'a')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
