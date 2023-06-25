#include "monty.h"

/**
 * f_tot1 - It adds node to the head stack.
 * @n: Is the new value.
 * @head: Is the head of the stack.
 * Return: Nothing.
 */

void f_tot1(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
