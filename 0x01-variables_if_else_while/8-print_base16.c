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
	char C;

	i = 0;
	while ( i < 10)
	{
		putchar(i);
		i++;
	}
	C = 'A';
	while ( C <= 'F')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
