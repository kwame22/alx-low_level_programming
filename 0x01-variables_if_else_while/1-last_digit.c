#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of output and compares the value
 *
 * Description: The program prints the last digit of output
 * and compares the last digit to 5 and 0
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	if (last_num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	return (0);
}
