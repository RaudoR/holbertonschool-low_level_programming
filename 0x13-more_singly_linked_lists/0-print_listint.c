#include "lists.h"
/**
 * print_listint - this function will print all elments in listint_t
 * @h: pointer to struct
 * Return: counter to struct
 */
size_t print_listint(const listint_t *h)

{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);

}
