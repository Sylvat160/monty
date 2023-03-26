#include "monty.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv[])
{
void (*exec_func)(stack_t **stack, unsigned int line_number);
size_t n;

inventory = NULL;
if (argc != 2)
{
error_handler(ERROR_USAGE_FILE);
}

_inventory_();
inventory->filename = argv[1];
inventory->file = fopen(inventory->filename, "r");
if (inventory->file == NULL)
{
error_handler(ERROR_OPEN_FILE);
}

while (getline(&(inventory->line), &n, inventory->file) > 0)
{
inventory->linenum++;
if (line_parser(inventory->line) == EXIT_FAILURE)
{
continue;
}
exec_func = opcode_matcher();
exec_func(&(inventory->stack), inventory->linenum);
}
return (EXIT_SUCCESS);
}
