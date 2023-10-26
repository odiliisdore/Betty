#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number of print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
		putchar('0');
}
