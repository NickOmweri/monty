#include "monty.h"

/**
 * f_prnt4 - It prints the top.
 * @counter: Is the line number.
 * @head: Is the stack head.
 * Return: Nothing.
 */

void f_prnt4(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stk(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
