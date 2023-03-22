#include "main.h"
/**
 * _abs - prints absolute value
 * @int: function accepts an int value
 *
 * Description: prints the absolute value
 * of an integer from input
 * Return: 0
 */
int _abs(int)
{
	int i;
	int abs_value;

	if (i < 0)
	{
		abs_value = i * -1;
		_putchar(abs_value + '0');
	}
	else
	{
		abs_value = i;
		_putchar(abs_value + '0');
	}
	return (0);
}