#include "monty.h"

/**
 */
void _pop_(stack_t **stack, unsigned int line_number)
{
	stack_t *next;
	(void)line_number;

	if (*stack == NULL)
		error_handler(ERROR_POP);
	else if ((*stack)->next != NULL)
	{
		next = (*stack)->next;
		next->prev = NULL;
		free(*stack);
		*stack = next;
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
