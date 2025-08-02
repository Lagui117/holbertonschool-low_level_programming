#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }

    return (NULL);
}
