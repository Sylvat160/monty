#include "monty.h"

/**
 * _pint - prints the value at the top of the stack,
 * @head: pointer to the stack
 * @number: line number
 * Return: void
 */

void _pint(stack_t **head, unsigned int number)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", number);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}