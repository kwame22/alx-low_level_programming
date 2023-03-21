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
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(' ');
		}
		i++;
	}
	return (0);
}
