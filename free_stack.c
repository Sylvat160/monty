#include "monty.h"


/**
 * free_stack - frees the stack
 * @head: pointer to the stack
 * Return: void
 */

void free_stack(stack_t *head)
{
stack_t *temp;
temp = head;
while (head)
{
temp = stack->next;
free(head);
stack = temp;
}
}
