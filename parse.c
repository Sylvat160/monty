#include "monty.h"

/**
 * line_parse - parses line or getline
 * @line: the linbe
 * Return: Nothing
 */
int line_parse(char *line)
{
	char *delim, *str;
	int len, num;

	delim = " \t\n";
	str = inventory->line;
	len = strlen(str);

	for (num = 0; str[num] == delim[0] || str[num] == delim[1] ||
			str[num] == delim[2]; num++)
		;
	if (num == len)
		return (EXIT_FAILURE);

	inventory->input[0] = strtok(line, delim);

	if (inventory->input[0][0] == '#')
		return (EXIT_FAILURE);

	inventory->input[1] = strtok(NULL, delim);

	return (EXIT_SUCCESS);
}
