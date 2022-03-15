#ifndef LISTS_H
#define LISTS_H

#define NIL "(nil)"

#include <stdlib.h>

typedef struct list list_t;

/**
 * struct list- this is a linked list structure
 * @str: string
 * @len: length of s
 * @next: linked next elemnet in list 
 */

struct list
{
	char *str;
	int len;
	list_t *next;

};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
