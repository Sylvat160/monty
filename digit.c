include "monty.h"

/**
 * _isdigit_ - checks if a string is a digit
 * @n: char to check
 * Return: 1 if digit, 0 if not
 */

int _isdigit_(char *n)
{
int num;

for (num = 0; n[num] != '\0'; num++)
{
if (isdigit(n[num]) == FALSE)
{
return (FALSE);
}
}
return (TRUE);
}
