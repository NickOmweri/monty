#include "monty.h"

/**
 * f_rtrt - It rotates the stack to the bottom.
 * @counter: Is the line number.
 * @head: Is the stack head.
 * Return: Nothing.
 */

void f_rtrt(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	stack_t *copy;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
