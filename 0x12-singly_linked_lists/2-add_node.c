#include "lists.h"

/**
 * add_node - node
 * @head: head
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = NULL;
if (!head || !str)
return (NULL);
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
