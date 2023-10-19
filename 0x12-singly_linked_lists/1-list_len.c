#include "lists.h"
/**
 * list_len - returns number in a list
 * @h: singly linked list
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
size_t el;
el = 0;
while (h != NULL)
{
h = h->next;
el++;
}
return (el);
}
