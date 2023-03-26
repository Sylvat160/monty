#include "monty.h"

/**
 * _add_ - adds the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */

void _add_(stack_t **stack, unsigned int line_number)
{
int sum;
if (*stack == NULL || (*stack)->next == NULL)
{
error_handler(ERROR_ADD);
}

sum = (*stack)->n + (*stack)->next->n;
_pop_(stack, line_number);
(*stack)->n = sum;
}
