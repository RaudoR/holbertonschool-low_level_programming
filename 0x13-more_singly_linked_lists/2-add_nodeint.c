#include "lists.h"
/**
 * add_nodeint - add a node
 * @head: pointer to struct
 * @n: int
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *first = NULL;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);

}
