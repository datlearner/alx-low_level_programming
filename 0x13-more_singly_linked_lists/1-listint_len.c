#include "lists.h"

/**
 * listint_len - number elements
 * @h: head list
 * Return: total nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t nofnodes = 0;
for (; h != NULL; h = h->next)
{
nofnodes++;
}
return (nofnodes);
}
