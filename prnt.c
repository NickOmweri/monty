#include "monty.h"

/**
 * f_prnt - It prints the stack.
 * @counter: Not utilized in this case.
 * @head: Is the stack head.
 * Return: Nothing.
 */

void f_prnt(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
