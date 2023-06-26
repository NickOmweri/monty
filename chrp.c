#include "monty.h"

/**
 * f_chrp - it prints the character at the top of the stack folowed by a line.
 * @counter: Is the line number.
 * @head: Is the stacks head.
 * Return: Nothing.
 */

void f_chrp(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
