#include "lists.h"
/**
 * listint_len - this function returns the number of elements in a linked listy
 * @h: pointer to struct
 * Return: counter to struct
 */
size_t listint_len(const listint_t *h)

{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);

}
