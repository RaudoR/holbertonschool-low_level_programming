#include "lists.h"
/**
 * list_len - this function gets the length of the linked list
 * @h: pointer to nodes
 * Return: len
 */

size_t list_len(const list_t *h)

{
	int len = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);

}
