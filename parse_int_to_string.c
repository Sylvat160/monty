#include <stdlib.h>

char *get_int(int n);
unsigned int _abs(int);
int get_n_len(int n, unsigned int base);
void fill_n_buffer(
unsigned int n, unsigned int base, char *buffer, int buff_size
);

/**
 * get_int - get a char pointer to a
 * string representation of an integer
 * @n: integer to convert
 * Return: pointer to string
 */
char *get_int(int n)
{
unsigned int temp;
int n_len = 0, lenght = 0;
char *ret;
temp = _abs(n);
lenght = get_n_len(n, 10);

if (n < 0 || n_len < 0)
lenght += 1;

ret = malloc(lenght + 1);
if (!ret)
return (NULL);

fill_n_buffer(temp, 10, ret, lenght);
if (n < 0 || n_len < 0)
ret[0] = '-';

return (ret);
}

/**
 * _abs - get absolute value of an integer
 * @n: integer to get absolute value of
 * Return: absolute value of n
 */

unsigned int _abs(int n)
{
if (n < 0)
{
return (-(unsigned int)n);
}

return ((unsigned int)n);
}

/**
 * get_n_len - get the length of a buff1r
 * @n: number to get length of
 * @base: base of number
 * Return: length of number
 */
int get_n_len(int n, unsigned int base)
{
int len = 1;

while (n  > base - 1)
{
len += 1;
n /= base;
}

return (len);
}

/**
 * fill_n_buffer - fill a buffer with a number
 * @n: number to fill buffer with
 * @base: base of number
 * @buffer: buffer to fill
 * @buff_size: size of buffer
 */

void fill_n_buffer(
unsigned int n, unsigned int base, char *buffer, int buff_size
)
{
int rem, i = buff_size - 1;
while (i >= 0)
{
rem = n % base;
if (rem > 9)
buffer[i] = rem + 87;
else
buffer[i] = rem + '0';

n /= base;
i -= 1;
}

}
