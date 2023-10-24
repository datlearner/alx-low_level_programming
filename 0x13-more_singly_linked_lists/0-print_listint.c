#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t nofnodes = 0;
for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
nofnodes++;
}
return (nofnodes);
}
