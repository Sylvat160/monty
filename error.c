#include "monty.h"

/**
 * error_handler - handles errors
 * @num: error to index
 * Return: void
 */

void error_handler(int num)
{
unsigned int index;
static char *error_msg[] = {
"Error: memory failure\n",
"USAGE: monty file\n",
NULL,
NULL,
"usage: push integer\n",
"can't print, stack empty\n",
"can't pop an empty stack\n",
"can't swap, stack too short\n",
"can't add, stack too short\n",
"can't sub, stack too short\n",
"can't div, stack too short\n",
"division by zero\n",
"can't mul, stack too short\n",
"can't mod, stack too short\n",
"can't pchar, stack empty\n",
"can't pchar, value out of range\n"
}

if (inventory)
{
index = inventory->linenum;
}
if (num <= 1)
dprintf(STDERR_FILENO, "%s", error_msg[num]);
else if (num == 2)
dprintf(STDERR_FILENO, "Error: Can't open file %s\n",
inventory->filename);
else if (num == 3)
dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", ind,
inventory->input[0]);
else if (num == 4)
dprintf(STDERR_FILENO, "L%u: %s", ind, error_msg[num]);

exit(EXIT_FAILURE);
}


/**
 * file_error - handles file errors
 * @file : file to name
 */

void file_error(char *file)
{
if (!file)
{
dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
dprintf(2, "Error: Can't open file %s\n", file);
free(main_s);
exit(EXIT_FAILURE);
}

/**
 * malloc_fail - function takes care of error that occurs with malloc
 *
 */
void malloc_fail(void)
{
dprintf(2, "Error: malloc failed\n");
free_stuff();
exit(EXIT_FAILURE);
}
