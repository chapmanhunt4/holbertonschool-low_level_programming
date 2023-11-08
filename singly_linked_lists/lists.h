#include <stddef.h>
#ifndef MAIN
#define MAIN

/**
 * struct node_s - singly linked list
 * @str: string
 * @next: points to next node
 **/

typedef struct node_s {
	char *str;
	unsigned int len;
	struct node_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
