#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if the output is positive, negative or zero
 *
 * Description: The function prints
 * positive when output is greater than zero,
 * negative when output is less than zero,
 * zero, when the output is zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
