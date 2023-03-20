#include <stdio.h>

/**
 * main - prints all combinations of digits
 *
 * Description: the programs prints all the
 * possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while ( i < 10)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
