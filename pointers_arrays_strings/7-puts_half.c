#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to process
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

