#include "monty.h"

/**
 * _push_ - a function that pushes an element to the stack
 * @stack: the head of stack
 * @line_number: the line number
 * Return: Nothing
 */
void _push_(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	char *num;
	(void)line_number;

	if (inventory->input[1] == NULL)
		error_handler(ERROR_PUSH);
	else
		num = inventory->input[1];

	if (is_digit(num) == TRUE)
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
			error_handler(ERROR_MALLOC);
	}
	else
		error_handler(ERROR_PUSH);

	if (new_node)
	{
		new_node->n = atoi(num);
		new_node->prev = NULL;
		new_node->next = *stack;
		*stack = new_node;
	}
}


/**
 * _pall_ - a function that prints all the values on the stack, starting
 * from the top of the stack
 * @stack: the head of stack
 * @line_number: the line number
 * Return: Nothing
 */
void _pall_(stack_t **stack, unsigned int line_number)
{
	size_t ind;
	stack_t *copy = *stack;
	(void)line_number;

	for (ind = 0; copy; ind++, copy = copy->next)
	{
		if (copy != NULL)
			printf("%d\n", copy->n);
	}
}
