#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of number
 *
 * Return: Always Success
 *
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("The last digit of %d is greater than %d\n", n);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d\n", n);
	}
	else if (n < 6)
	{
		printf("The last digit of %d is less than %d\n", n);
	}
	return (0);
}
