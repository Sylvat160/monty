#include "monty.h"

/**
 * free_stack - frees all malloc'd in stack
 *
 * Return: void
 */
void free_stack(void)
{
stack_t *temp;
stack_t *head;


if (inventory->stack)
{
head = inventory->stack;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
}

/**
 * free_all - frees all malloc'd memory
 *
 * Return: void
 */
void free_all(void)
{
if (inventory != NULL)
{
if (inventory->file != NULL)
fclose(inventory->file);
if (inventory->line != NULL)
free(inventory->line);
if (inventory->input != NULL)
free(inventory->input);
free_stack();
free(inventory);
}
}
