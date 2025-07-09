#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings in a newly allocated space
 * @s1: first string (may be NULL, treated as empty)
 * @s2: second string (may be NULL, treated as empty)
 *
 * Return: pointer to new string containing s1 followed by s2,
 *         or NULL if the allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty strings */
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);

	/* copy s1 */
	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	/* append s2 */
	for (j = 0; j < len2; j++)
		new[i + j] = s2[j];

	new[len1 + len2] = '\0';
	return (new);
}

