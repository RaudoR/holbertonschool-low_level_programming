#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: input of index location
 * Return: return node at index or null if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (counter == index)
		{
			temp = head;
			return (temp);
		}
		counter++;
		head = head->next;
	}
	return (NULL);
}
