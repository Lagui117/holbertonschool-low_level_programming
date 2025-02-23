#include "main.h"

/**
 * jack_bauer - imprime chaque minute de la journée
 *
 * Return: Rien
 */
void jack_bauer(void)
{
    int h, m;

    for (h = 0; h < 24; h++)  /* Parcours des heures de 00 à 23 */
    {
        for (m = 0; m < 60; m++)  /* Parcours des minutes de 00 à 59 */
        {
            _putchar((h / 10) + '0');  /* Affiche le chiffre des dizaines de l'heure */
            _putchar((h % 10) + '0');  /* Affiche le chiffre des unités de l'heure */
            _putchar(':');  /* Séparateur ':' */
            _putchar((m / 10) + '0');  /* Affiche le chiffre des dizaines des minutes */
            _putchar((m % 10) + '0');  /* Affiche le chiffre des unités des minutes */
            _putchar('\n');  /* Nouvelle ligne après chaque minute */
        }
    }
}

