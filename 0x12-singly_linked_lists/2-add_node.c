#include "lists.h"
/**
 *
 *
 *
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
