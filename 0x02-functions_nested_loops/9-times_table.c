#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			putchar(',');
			putchar(' ');

			prod = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digits if its two numbers
			 */
			if (prod <= 9)
				putchar(' ');
			else
				putchar((prod / 10) + 48); /*get the first digit*/

			putchar((prod % 10) + 48); /*get the second digit*/
		}
		putchar('\n');
	}
}
