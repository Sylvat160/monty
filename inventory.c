#include "monty.h"

/**
 * inv - a function that holds the global structure of variables
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int _inventory_(void)
{
	inventory = malloc(sizeof(inventory_t));

	if (!inventory)
		error_handler(ERROR_MALLOC);

	inventory->input = malloc(sizeof(char *) * 3);
	if (!inventory->input)
	{
		free(inventory);
		error_handler(ERROR_MALLOC);
	}

	inventory->stack = NULL;
	inventory->line = NULL;
	inventory->linenum = 0;

	return (EXIT_SUCCESS);
}
