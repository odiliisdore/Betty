#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 * @n: number of bytes from n2 to concatenate
 *
 * Return: pointer to space containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_lenght, s2_lenght;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the lenght of the strings*/

	for (s1_lenght = 0; s1[s1_lenght] != '\0'; s1_lenght++)
		;
	for (s2_lenght = 0; s2[s2_lenght] != '\0'; s2_lenght++)
		;
	/*memory reservation-for case 1 & 2.*/
	str = malloc(s1_lenght + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str.*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
