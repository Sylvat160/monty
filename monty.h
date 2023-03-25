#ifndef MONTY_H
#define MONTY_H

/* ************* HEADERS *************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/* ********** MACROS ********** */
define ERROR_MALLOC 0
#define ERROR_USAGE_FILE 1
#define ERROR_OPEN_FILE 2
#define ERROR_UNKNOWN 3
#define ERROR_PUSH 4
#define ERROR_PINT 5
#define ERROR_POP 6
#define ERROR_SWAP 7
#define ERROR_ADD 8
#define ERROR_SUB 9
#define ERROR_DIV 10
#define ERROR_DIV_ZERO 11
#define ERROR_MUL 12
#define ERROR_MOD 13
#define ERROR_STACK_EMPTY 14
#define ERROR_PCHAR_RANGE 15


/* ********** STRUCTURES ********** */


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct inventory_s - a struct pointing to all other structs for this project
 * @filename: the filename from argv[1]
 * @stack: pointer to stack
 * @line: input line received from getline
 * @input: lines of the files parsed into separate elements
 * @linenum: the linenumber
 * @file: the input file
 */
typedef struct inventory_s
{
char *filename;
stack_t *stack;
char *line;
char **input;
unsigned int linenum;
FILE *file;
} inventory_t;

/* ********** GLOBALS ********** */
extern inventory_t *inventory;
inventory_t *inventory;

void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
// void execute_function(stack_t **stack, char *opcode, unsigned int line_number);
void execute_funct(char *filename, stack_t **stack);

#endif
