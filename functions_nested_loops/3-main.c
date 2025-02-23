#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');  /* Test pour un caractère majuscule */
    _putchar(r + '0');
    r = _islower('o');  /* Test pour un caractère minuscule */
    _putchar(r + '0');
    r = _islower(108);  /* 108 correspond à 'l', un caractère minuscule */
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

