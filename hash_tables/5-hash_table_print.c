#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Description: prints the key/value pairs in the order they appear in array
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int printed = 0;

    if (!ht)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            if (printed)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            printed = 1;
            node = node->next;
        }
    }

    printf("}\n");
}

