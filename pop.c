#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 * @head: pointer to the stack
 * @counter: line number
 * Return: void
 */

void _pop(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
else
{
*head = (*head)->next;
free((*head)->prev);
(*head)->prev = NULL;
}

}
