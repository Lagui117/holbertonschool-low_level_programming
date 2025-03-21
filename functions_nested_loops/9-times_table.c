#include "main.h"

/**
 * times_table - Prints the 9 times table from 0 to 9
 */
void times_table(void)
{
    int row, col, product;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;

            if (col == 0)
            {
                _putchar(product + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)
                    _putchar(' '); /* Ajout d'un espace pour alignement */

                if (product >= 10)
                    _putchar((product / 10) + '0'); /* Premier chiffre */

                _putchar((product % 10) + '0'); /* Deuxième chiffre */
            }
        }
        _putchar('\n');
    }
}

