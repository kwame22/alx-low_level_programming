#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Description: prints all the lowercase
 * alphabet in reverse using putchar
 * Return: 0;
 */
int main(void)
{
	char c;
	
	c = 'z';
	while ( c >= 'a')
	{
		putchar(c);
		putchar('\n');
		c--;
	}
	return (0);
}
