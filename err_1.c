#include "monty.h"

int usage_err(void);
int malloc_err(void);
int f_open_err(char *filename);
int unknown_op_err(char *opcode, unsigned int line_number);
int no_int_err(unsigned int line_number);

/**
 * usage_err - prints error message for incorrect usage
 * Return: EXIT_FAILURE
 */

int usage_err(void)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}

/**
 * malloc_err - prints error message for malloc failure
 * Return: EXIT_FAILURE
 */
int malloc_err(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}

/**
 * f_open_err - prints error message for file open failure
 * @filename: name of file
 * Return: EXIT_FAILURE
 */

int f_open_err(char *filename)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
return (EXIT_FAILURE);
}

/**
 * unknown_op_err - prints error message for unknown opcode
 * @opcode: opcode
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int unknown_op_err(char *opcode, unsigned int line_number)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
return (EXIT_FAILURE);
}

/**
 * no_int_err - prints error message for no integer
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int no_int_err(unsigned int line_number)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
return (EXIT_FAILURE);
}
