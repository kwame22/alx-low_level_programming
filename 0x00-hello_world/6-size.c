#include <stdio.h>

/**
 * main - the program print the size of various types on the computer
 * Description: Using the main function
 * this program prints the sizes of various types on the computer
 * Return: 0
 * Warnings are allowed
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
