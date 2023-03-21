#include "main.h"

/**
 * main - prints _putchar to output
 *
 * Description: The program prints to
 * output the word _putchar
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
