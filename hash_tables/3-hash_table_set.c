#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key (cannot be NULL or empty)
 * @value: the value to associate with the key (will be duplicated)
 *
 * Return: 1 if success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    /* Check if key already exists and update value */
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (current->value ? 1 : 0);
        }
        current = current->next;
    }

    /* Key not found, create new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
