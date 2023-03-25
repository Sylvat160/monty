#include "monty.h"

/**
 * free_stack - frees a stack_t list
 * @stack: double pointer to the stack
 * Return: void
 */

void free_stack(stack_t *stack)
{
stack_t *current = stack, *next;

while (current)
{
next = current->next;
free(current);
current = next;
}
}
