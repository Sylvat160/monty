#include "monty.h"

/**
 * _mod_ - computes the rest of the division of
 * the second top element of the
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */

void _mod_(stack_t **stack, unsigned int line_number)
{
int r;
if (*stack == NULL || (*stack)->next == NULL)
{
error_handler(ERROR_MOD);
}
r = (*stack)->next->n % (*stack)->n;
_pop_(stack, line_number);
(*stack)->n = r;
}
