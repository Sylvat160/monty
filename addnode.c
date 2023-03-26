#include "monty.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the list
 * Return: void
 */

void add_node(stack_t **head, int n)
{
stack_t *new_node, *temp;

temp = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(0);
}

if (temp)
{
temp->prev = new_node;
}
new_node->n = n;
new_node->next = temp;
new_node->prev = NULL;
*head = new_node;
}
