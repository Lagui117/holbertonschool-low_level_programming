#include "main.h"

/**
 *print_diagonal - 
 *
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
		for (j = 0; j < spaces ;j++)
		{		
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		
		spaces++;
	}
}
