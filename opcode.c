include "monty.h"

/**
 * opcode_match - a function for opcodes
 * Return: functions
 */

void (*opcode_match(void))(stack_t **stack, unsigned int line_number)
{
instruction_t *num;
char *op;


static instruction_t opcodes[] = {
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
};

num = opcodes;
op = inventory->input[0];

while (num->opcode && strcmp(num->opcode, op, strlen(op)))
{
num++;
}

if (!num->f)
{
error_handler(ERROR_UNKNOWN);
}

return (num->f);
}
