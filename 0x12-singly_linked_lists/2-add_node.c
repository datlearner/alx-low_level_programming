/**
 * add_node - adds a new node
 * @head: pointer to a pointer
 * @str: the string addition
 *
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nod = NULL;
if (!head || !str)
return (NULL);
nod = malloc(sizeof(list_t));
if (!nod)
return (NULL);
nod->str = strdup(str);
if (!nod->str)
{
free(nod);
return (NULL);
}
nod->len = strlen(str);
nod->next = *head;
*head = nod;
return (nod);
}
