#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9
 * Description: Print the numbers excluding 2 and 4
 * Return: Print the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	char z;

	for (z = 48; z <= 57; z++)
	{
		if (!(z == '2' || z == '4'))
			_putchar(z);
	}
	_putchar('\n');
}
