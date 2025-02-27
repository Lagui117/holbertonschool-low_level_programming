#include "main.h"
/**
 * _isdigit - checks is c is a digit
 *@c: caractere to be checked
 *
 *Return: 1 if is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

