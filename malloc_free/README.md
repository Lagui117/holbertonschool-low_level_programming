# C - malloc, free

## Description

Ce projet introduit la gestion de la mémoire dynamique en langage C à l'aide des fonctions `malloc` et `free`. Le but est d’apprendre à allouer manuellement de la mémoire pendant l’exécution du programme, puis à la libérer correctement afin d’éviter les fuites mémoire.

---

## Contenu du projet

| Fichier               | Fonction                                  | Description                                                                 |
|----------------------|-------------------------------------------|-----------------------------------------------------------------------------|
| `0-create_array.c`    | `create_array`                            | Crée un tableau de caractères et l'initialise avec un caractère donné.     |
| `1-strdup.c`          | `_strdup`                                 | Duplique une chaîne de caractères en allouant dynamiquement la mémoire.    |
| `2-str_concat.c`      | `str_concat`                              | Concatène deux chaînes en une nouvelle allouée dynamiquement.              |
| `3-alloc_grid.c`      | `alloc_grid`                              | Crée une grille 2D d'entiers initialisée à zéro.                            |
| `4-free_grid.c`       | `free_grid`                               | Libère une grille 2D précédemment allouée.                                 |

---

## Fonctions autorisées

- `malloc`
- `free`
- `_putchar` (facultatif, pour l'affichage)

---

## Contraintes

- Aucun usage de `printf`, `puts`, `calloc`, `realloc`, etc.
- Aucun usage de variables globales.
- Aucun dépassement de 5 fonctions par fichier.
- Respect strict de la norme **Betty**.
- Pas de fuite mémoire tolérée (utiliser `va
# C - malloc, free

## Description

Ce projet introduit la gestion de la mémoire dynamique en langage C à l'aide des fonctions `malloc` et `free`. Le but est d’apprendre à allouer manuellement de la mémoire pendant l’exécution du programme, puis à la libérer correctement afin d’éviter les fuites mémoire.

---

## Contenu du projet

| Fichier               | Fonction                                  | Description                                                                 |
|----------------------|-------------------------------------------|-----------------------------------------------------------------------------|
| `0-create_array.c`    | `create_array`                            | Crée un tableau de caractères et l'initialise avec un caractère donné.     |
| `1-strdup.c`          | `_strdup`                                 | Duplique une chaîne de caractères en allouant dynamiquement la mémoire.    |
| `2-str_concat.c`      | `str_concat`                              | Concatène deux chaînes en une nouvelle allouée dynamiquement.              |
| `3-alloc_grid.c`      | `alloc_grid`                              | Crée une grille 2D d'entiers initialisée à zéro.                            |
| `4-free_grid.c`       | `free_grid`                               | Libère une grille 2D précédemment allouée.                                 |

---

## Fonctions autorisées

- `malloc`
- `free`
- `_putchar` (facultatif, pour l'affichage)

---

## Contraintes

- Aucun usage de `printf`, `puts`, `calloc`, `realloc`, etc.
- Aucun usage de variables globales.
- Aucun dépassement de 5 fonctions par fichier.
- Respect strict de la norme **Betty**.
- Pas de fuite mémoire tolérée (utiliser `valgrind` pour tester).

---

## Compilation

Les fichiers doivent être compilés avec :

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o exécutable

