#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - Is a doubly linked list representation of a stack.
 * @n: Is an integer.
 * @prev: It points to the previous element of the stack.
 * @next: It points to the next element of the stack.
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - Are variables -args, file, line content.
 * @arg:Is the value.
 * @file: Is a pointer to monty file.
 * @content: Is the line content.
 * @lifi: The flag that changes stack <-> queue.
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - Is the opcode and its function.
 * @opcode: Is the opcode.
 * @f: Is the function to handle the opcode
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void f_chrp(stack_t **head, unsigned int counter)
void f_comp(stack_t **head, unsigned int counter)
void f_divd(stack_t **head, unsigned int counter)
int exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
void f_prnt(stack_t **head, unsigned int counter)
void f_prntfs(stack_t **head, unsigned int counter)
void f_psh(stack_t **head, unsigned int counter)
void f_rtrt(stack_t **head, __attribute__((unused)) unsigned int counter)
void f_totl(stack_t **head, unsigned int counter)
void f_chain(stack_t **head, unsigned int counter)
void free_stk(stack_t *head)
void mltply(stack_t **head, unsigned int counter)
void f_stk(stack_t **head, unsigned int counter)
void f_prnt3(stack_t **head, unsigned int counter)
void f_prnt4(stack_t **head, unsigned int counter)
void f_rtr(stack_t **head, __attribute__((unused)) unsigned int counter)
void f_rtr1(stack_t **head,  __attribute__((unused)) unsigned int counter)
void f_sbtr(stack_t **head, unsigned int counter)
void f_tot2(stack_t **head, int n)

#endif
