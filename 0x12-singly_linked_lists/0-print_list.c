#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: pointer
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
for (size_t count = 0; h != NULL; count++, h = h->next)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
}
return (count);
}
