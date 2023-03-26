#include "monty.h"

/**
 * _mul_ - multiplies the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */

void _mul_(stack_t **stack, unsigned int line_number)
{
int product;

if (*stack == NULL || (*stack)->next == NULL)
{
error_handler(ERROR_MUL);
}

product = (*stack)->n * (*stack)->next->n;
_pop_(stack, line_number);
(*stack)->n = product;
}
