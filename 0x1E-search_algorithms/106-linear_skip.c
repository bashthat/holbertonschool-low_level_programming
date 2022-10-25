#include "search_algos.h"

/**
 * linear_skip - searches for a value given a linear skip.
 * @list: list points to the head of the list.
 * @value: value the program searches for.
 * Return: The value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *tmp = NULL;

    if (list == NULL)
        return (NULL);

    tmp = list->express;
    while (tmp != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);

        if (tmp->n >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n",
                   list->index, tmp->index);
            break;
        }

        list = tmp;
        tmp = tmp->express;
    }

    if (tmp == NULL)
    {
        tmp = list;
        while (tmp->next != NULL)
            tmp = tmp->next;
        printf("Value found between indexes [%lu] and [%lu]\n",
               list->index, tmp->index);
    }

    while (list != NULL && list->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return (list);
        list = list->next;
    }

    return (NULL);
}