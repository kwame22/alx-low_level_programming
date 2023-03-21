#include <stdio.h>

/**
 * main - prints all numbers of base 16
 *
 * Description: The program prints
 * all the numbers of base 16 followed
 * by a newline
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	while ( i < 10)
	{
		putchar(i + '0');
		i++;
	}
	c = 'a';
	while ( C <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
