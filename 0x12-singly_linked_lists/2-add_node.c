#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: the original linked list
 * @str: the string to add to the node
 *
 * Return: the address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int lenght = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	temp->len = lenght;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
