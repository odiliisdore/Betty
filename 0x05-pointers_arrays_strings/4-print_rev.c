#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;
	
	while (*s != '\0');
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o++)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
