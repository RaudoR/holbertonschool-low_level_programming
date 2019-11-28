#include "lists.h"
/**
 * free_listint2 - function to free
 * @head: pointer to head of struct listint_t type
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp1 = NULL;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp1 = temp;
		temp = temp->next;
		free(temp1);
	}
	*head = NULL;
}
