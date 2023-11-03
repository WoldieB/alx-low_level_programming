#include "hash_tables.h"

/**
 * hash_table_get - retrieve value using key in a hash table
 * @ht: the hash table
 * @key: key to retrieve
 * Return: value of key in ht or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int k_index;
        hash_node_t *tmp;

        if (ht == NULL)
                return (NULL);

        if (key == NULL || *key == '\0')
                return (NULL);

        k_index = key_index((unsigned char *)key, ht->size);

        tmp = ht->array[k_index];

        while (tmp != NULL)
        {
                if (strcmp(tmp->key, key) == 0)
                        return (tmp->value);
                tmp = tmp->next;
        }

        return (NULL);
}
