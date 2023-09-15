#include "main.h"

/**
 * print_diagonal - draw a diagonal line according to parameter
 *@n: The number of times to print a diagonal line
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (n > 1)
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 1)
	{
		_putchar('\n');
	}
}
