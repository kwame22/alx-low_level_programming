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
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and less than 6 and not zero\n", n, last_digit);
	return (0);
}
