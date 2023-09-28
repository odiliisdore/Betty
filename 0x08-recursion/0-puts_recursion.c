#include "main.h"

/**
 * puts_recursion - function that prints a string
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_put_recursion(s + 1);
	}
	else
		putchar('n');
}
