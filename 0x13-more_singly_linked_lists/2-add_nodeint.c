#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add a new node
 * @head: head
 * @n: element.
 * Return: address of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t)); 
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
