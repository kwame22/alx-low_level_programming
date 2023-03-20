#include <stdio.h>

/**
 * main - prints all the single numbers of base 10
 *
 * Description: program prints all the
 * single numbers of base 10 followed by
 * a newline
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while ( i < 10)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
