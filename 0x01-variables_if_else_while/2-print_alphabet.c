#include <stdio.h>
/**
 * main - prints all lowercase alphabets
 *
 * Description - Prints only lowercase alphabets
 * to standard output
 * Return: 0
 */
int main(void)
{
	char c;
	
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
