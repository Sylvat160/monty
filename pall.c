#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @head: pointer to the stack
 * @number: line number
 * Return: void
 */

void _pall(stack_t **head, unsigned int number)
{
stack_t *h;

(void)number;
h = *head;

if (h == NULL)
return;

while (h)
{
printf("%d\n", h->n);
h = h->next;
}

}
