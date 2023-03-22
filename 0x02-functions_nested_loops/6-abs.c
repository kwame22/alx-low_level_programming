#include "main.h"
/**
 * _abs - prints absolute value
 * @i: function accepts an int value 'i'
 *
 * Description: prints the absolute value
 * of an integer from input
 * Return: 0
 */
int _abs(int i)
{
	int abs_value;

	if (i < 0)
	{
		abs_value = i * -1;
		_putchar('0' + abs_value);
	}
	else
	{
		abs_value = i;
		_putchar('0' + abs_value);
	}
	return (0);
}
