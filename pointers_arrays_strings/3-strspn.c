#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: input string
 * @accept: sete of chars to match
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i = 0, j = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				c++;
			}
			j++;
		}
		if (!found)
			return (c);

		found = 0;
		i++;
		j = 0;
	}
	return (c);
}
