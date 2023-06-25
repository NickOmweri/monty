#include "monty.h"

/**
 * f_prnt3 - It prints the top.
 * @counter: Is the line number.
 * @head: Is the stacks head.
 * Return: Nothing.
 */

void f_prnt3(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
