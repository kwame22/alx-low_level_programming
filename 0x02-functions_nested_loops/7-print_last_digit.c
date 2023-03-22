#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: the number
 *
 * Description: the function prints the
 * last digit of the number from input
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (0);
}
