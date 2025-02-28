#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int i, j;
	int spaces = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

		spaces++;
	}
}
