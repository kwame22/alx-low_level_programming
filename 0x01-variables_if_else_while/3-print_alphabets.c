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
		putchar('\n');
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	return (0);

}
