#include "monty.h"
/**
 * f_pop - Removes and prints the top element of the stack
 * @head: stack head to the ptr
 * @counter: line Number
 * Return: no return val
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *g;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	*head = g->next;
	free(g);
}
