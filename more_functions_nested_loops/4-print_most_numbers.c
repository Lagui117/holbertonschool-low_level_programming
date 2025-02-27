#include "main.h"
/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9
 *
 * Return:void
 */
void print_most_numbers(void)
{
	int number = 0;

	for (; number <= '9'; number++)
	{
		if (number == 2 || number == 4)
		{
			number++;
		}
		_putchar(number + '0');
	}
	_putchar('\n');
}

