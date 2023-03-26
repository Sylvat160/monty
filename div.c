#include "monty.h"

/**
 * _div_ - divides the second top element of
 * he stack by the top element
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */

void _div_(stack_t **stack, unsigned int line_number)
{
int q;

if (*stack == NULL || (*stack)->next == NULL)
{
error_handler(ERROR_DIV);
}

if ((*stack)->n == 0)
{
error_handler(ERROR_DIV_ZERO);
}

q = (*stack)->next->n / (*stack)->n;
_pop_(stack, line_number);
(*stack)->n = q;
}
