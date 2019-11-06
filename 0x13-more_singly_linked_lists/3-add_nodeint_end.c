#include "lists.h"
/**
 * *add_nodeint_end - function adds a new node
 * @head: pointer to struct
 * @n: int
 * Return: struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *first = NULL;
	listint_t *temp = NULL;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = first;
	first->next = NULL;

	return (*head);

}
