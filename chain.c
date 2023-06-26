#include "monty.h"

/**
 * f_chain - It prints the top.
 * @head: Is the head of the stack.
 * @counter: Is the line number.
 * Return: Nothing.
 */

void f_chain(stack_t **head, unsigned int counter)
{
	bus.lifi = 1;
	(void)head;
	(void)counter;
}

/**
 * addchain - It adds node to the tail stack.
 * @head: Is the head of the stack.
 * @n: Is the new value.
 * Return: Nothing.
 */

void addchain(stack_t **head, int n)
{
	stack_t, *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
