#include "monty.h"

help_t *main_s = NULL;

/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: exit status
 */

int main(int ac, char **av)
{
instruction_t ops[] = {
{"push", _push_},
{"pall", _pall_},
{"pint", _pint_},
{"pop", _pop_},
{"swap", _swap_},
{"add", _add_},
{"nop", _nop_},
{"sub", _sub_},
{"div", _div_},
{"mul", _mul_},
{"mod", _mod_},
{NULL, NULL}
}

if (ac != 2)
{
file_err(NULL);
}

main_s = malloc(sizeof(help_t));
if (!main_s)
{
dprintf(STDERR_FILENO, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

main_s->fp = fopen(av[1], "r");
if (!main_s->fp)
{
file_err(av[1]);
}
main_s->push_n = NULL;
main_s->buff = NULL;
main_s->stack_s = NULL;
main_s->data = 1;
main_loop(ops);
return (0);
}
