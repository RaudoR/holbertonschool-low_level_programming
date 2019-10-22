#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - function
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *ptr;

ptr = malloc(sizeof(struct dog));
if (ptr == NULL)
	return (NULL);

if (name == NULL)
{
free(ptr);
return (NULL);
}
ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (ptr->name == NULL)
	return (NULL);
_strcpy(ptr->name, name);

ptr->age = age;

if (owner == NULL)
{
free(ptr->owner);
free(ptr);
return (NULL);
}
ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (ptr->owner == NULL)
	return (NULL);
_strcpy(ptr->owner, owner);

return (ptr);
}

/**
 * _strlen - main function
 * @s: integer
 * Return: n
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

/**
 * _strcpy - main function to copy the string
 * @dest: destination of copied string
 * @src: to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
