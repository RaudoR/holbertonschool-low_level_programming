#include "lists.h"
/**
 * add_dnodeint - function to add node at the head of a doubly linked list
 * @head: double pointer of dlistint_t type to head of list
 * @n: int of const type for data inside list
 * Return: doubly linked list if successful or NULL if unsuccessful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
