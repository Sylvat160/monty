#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 * Return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;

(void) line_number;

while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}
