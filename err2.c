#include "monty.h"

int short_stack_err(unsigned int line_number, char *opcode);
int div_err(unsigned int line_number);
int pop_err(unsigned int line_number);
int pint_err(unsigned int line_number);
int pchar_err(unsigned int line_number, char *message);

/**
 * short_stack_err - prints error message for short stack
 * @line_number: line number
 * @opcode: opcode
 * Return: EXIT_FAILURE
 */
int short_stack_err(unsigned int line_number, char *opcode)
{
fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, opcode);
return (EXIT_FAILURE);
}

/**
 * div_err - prints error message for division by zero
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int div_err(unsigned int line_number)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
return (EXIT_FAILURE);
}

/**
 * pop_err - prints error message for pop on empty stack
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int pop_err(unsigned int line_number)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
return (EXIT_FAILURE);
}

/**
 * pchar_err - prints error message for pchar on empty stack
 * @line_number: line number
 * @message: message
 * Return: EXIT_FAILURE
 */
int pchar_err(unsigned int line_number, char *message)
{
fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
return (EXIT_FAILURE);
}

/**
 * pint_err - prints error message for pint on empty stack
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int pint_err(unsigned int line_number)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
return (EXIT_FAILURE);
}
