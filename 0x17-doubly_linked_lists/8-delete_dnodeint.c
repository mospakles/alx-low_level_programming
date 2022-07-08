#include "lists.h"
/**
 * delete_dnodeint_at_index - function deletes node at given position
 * @head: pointer to pointer of head of linked list
 * @index: unsigned int index position
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *next;
unsigned int i;

if (*head == NULL)
return (-1);

temp = *head;

if (index == 0)
{
*head = temp->next;
temp->prev = NULL;
free(temp);
return (1);
}
