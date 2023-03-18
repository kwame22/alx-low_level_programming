
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints if the output is positive, negative or zero
 * 
 * Description: The function prints
 * positve when output is greater zero, negative when output
 * is less than zero, and zero when the output is zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%ld: is positve\n", n);
	else if (n<0)
		printf("%ld: is negative\n", n);
	else
		printf("%ld: is zero\n", n);
	return (0);
}
