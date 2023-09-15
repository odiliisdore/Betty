#include "main.h"
#include<stdio.h>

/**
 * main - print Fizz Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d\n", i);
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz\n");
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz\n");
		}
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz\n");
		}
	}
	return (0);
}
