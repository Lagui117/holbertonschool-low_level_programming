#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');  /* Test pour une lettre majuscule */
    _putchar(r + '0');
    r = _isalpha('o');  /* Test pour une lettre minuscule */
    _putchar(r + '0');
    r = _isalpha(108);  /* Test pour un caractère numérique ('l') */
    _putchar(r + '0');
    r = _isalpha(';');  /* Test pour un caractère non alphabetique */
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

