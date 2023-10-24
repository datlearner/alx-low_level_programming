#include "lists.h"

/**
 * pop_listint - deleteteshead node
 * @head: head
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
listint_t *current;
listint_t *temp;
int hnode;
if (*head == NULL)
return (0);
current = *head;
hnode = current->n;
temp = current->next;
free(current);
*head = temp;
return (hnode);
}
