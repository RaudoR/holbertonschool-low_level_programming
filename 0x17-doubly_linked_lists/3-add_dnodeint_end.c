#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: head of the node
 * @n: new node
 * Return: return the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	node->prev = temp;
	temp->next = node;
	return (node);
}
