#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string in a newly allocated memory space
 * @str: pointer to the source string
 *
 * Return: pointer to the duplicated string,
 *         or NULL if str is NULL or if malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	/* calculate length of the string */
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';
	return (dup);
}

