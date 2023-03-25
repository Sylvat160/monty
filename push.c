#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
int n;
stack_t *new;

if (!stack)
return;

if (!data || !isdigit(data[0]))
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
n = atoi(data);

new = malloc(sizeof(stack_t));

if (!new)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new->n = n;
new->prev = NULL;
new->next = *stack;

if (*stack)
(*stack)->prev = new;

*stack = new;
}
