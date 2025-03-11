#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to measure
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int len = 0;
    while (str && *str++)
        len++;
    return len;
}

/**
 * rev_string - Reverses a string
 * @str: The string to reverse
 */
void rev_string(char *str)
{
    if (!str)
        return;

    char *start = str;
    char *end = str + _strlen(str) - 1;
    char temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
