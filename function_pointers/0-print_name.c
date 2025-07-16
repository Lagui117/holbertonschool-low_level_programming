#include "function_pointers.h"

/**i
 * print_name - Appelle une fonction pour afficher un nom
 * @name: Le nom à afficher
 * @f: Pointeur vers la fonction d'affichage
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
		f(name);
}
