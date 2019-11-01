#include "lists.h"
/**
 * *add_node - add node
 * @head: double pointer to list
 * @str: pointer to string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *temp = NULL;
	int counter = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[counter] != '\0')
	{
		counter++;
	}
	temp->len = counter;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (*head);

}
