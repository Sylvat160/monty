#include "monty.h"

/**
 * _pint_ - a function prints the value at the top of the stack, followed by a new line.
 * @stack: the input stack
 * @line_number: line number
 * Return: Nothing
 */
void _pint_(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!stack || !*stack)
		error_handler(ERROR_PINT);

	printf("%d\n", (*stack)->n);
}
