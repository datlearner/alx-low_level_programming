#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: pointer
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
size_t b = 0;
while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
b++;
h = h->next;
}
return (b);
}
