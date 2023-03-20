#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabet
 *
 * Description - prints all the uppercase and lowercase
 * alphabets followed by a newline
 * Return: 0
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);

}
