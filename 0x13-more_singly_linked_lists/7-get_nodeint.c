#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head.
 * @index: index
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (i < index && head != NULL)
{
head = head->next;
i++;
}
return (head);
}
