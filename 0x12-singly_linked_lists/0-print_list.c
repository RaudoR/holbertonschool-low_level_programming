#include "lists.h"
/**
 * print_list - function that prints contents
 * @h: pointer to struct
 * Return: a
 */

size_t print_list(const list_t *h)
{
	unsigned int a = 0;
	const list_t *temp = NULL;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		a++;
	}
	return (a);

}
