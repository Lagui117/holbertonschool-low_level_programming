#include "main.h"

/**
 *
 *
 * 
 */
void more_numbers(void)
{
	int number;
	int number2;

	for (number2 = 0; number2 < 10; number2++)
	{	
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) +'0');
			}
			_putchar((number % 10) +'0');
		}
		_putchar('\n');
	}
}			
