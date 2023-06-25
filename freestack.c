#include "monty.h"

/**
 * free_stk - It frees a doubly linked list.
 * @head: Is the head of the stack.
 */

void free_stk(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
