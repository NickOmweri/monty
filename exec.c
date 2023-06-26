#include "monty.h"

/**
 * exec - It executes the op-code.
 * @counter: Is the line counter.
 * @content: Is the line content.
 * @stack: Is the head linked list.
 * @file: Is the pointer to the monty file.
 * Return: Nothing.
 */

int exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_stk},
		{"swap", f_tot1},
		{"add", f_tot},
		{"nop", f_comp},
		{"sub", f_sbtr},
		{"sub", f_sbtr},
		{"mul", mltply},
		{"mod", f_comp},
		{"pchar", f_chrp},
		{"pstr", f_sbtr},
		{"rotl", f_rtr1},
		{"rotr", f_rtr},
		{"queue", f_chain},
		{"stack", f_stk},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stk(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
