#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - function that convert a string to an integer.
 * @str: input
 * Return: The integer
 */
int _atoi(char *str)
{
	int sign = 1, result = 0, digit_found = 0;
	int i = 0;
	int exceed = 0;

	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] == '-' && !digit_found)
			sign = -sign;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit_found = 1;
			if (str[i] - '0' > INT_MAX % 10)
				exceed = 1;

			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && exceed))
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}

			result = result * 10 + (str[i] - '0');
		}
		else if (digit_found)
			break;
		i++;
	}
	return (result * sign);
}
