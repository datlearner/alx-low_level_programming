#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: head
 *
 * Return: none.
 */
void free_listint2(listint_t **head)
{
if (head != NULL && *head != NULL)
{
listint_t *current;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
}
