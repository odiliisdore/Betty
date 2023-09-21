#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer param
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;

	nl = n;

	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
