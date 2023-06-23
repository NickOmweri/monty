#include "monty.h"

/**
 * f_prntfs - It prints the string at the top of the stack folowed by a new one.
 * @counter: Is the line number.
 * @head: Is the stack head.
 * Return: Nothing.
 */

void f_prntfs(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
