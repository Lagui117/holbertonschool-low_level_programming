#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *new_name, *new_owner;

	if (!name || !owner)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_name)
	{
		free(doggo);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_owner)
	{
		free(new_name);
		free(doggo);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	doggo->name = new_name;
	doggo->age = age;
	doggo->owner = new_owner;

	return (doggo);
}

