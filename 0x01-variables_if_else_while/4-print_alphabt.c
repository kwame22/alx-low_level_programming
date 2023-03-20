#include <stdio.h>

/**
 * main - print the alphabets without q and e
 *
 * Description: the program prints
 * all lowercase alphabets with the 
 * exception of q and e
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while ( c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			continue
		}
		putchar(c);	
		putchar('\n');
		c++;
	}
	return (0);
}
