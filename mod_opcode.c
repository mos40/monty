#include "monty.h"
/**
 * f_mod - counts the rest of the Div of the 2nd ./
 * top element of the stack by the top element of mod
 * @head: stack head to the ptr
 * @counter: line_Num
 * Return: no return val
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *g;
	int length_mod = 0, curr_Node;

	g = *head;
	while (g)
	{
		g = g->next;
		length_mod++;
	}
	if (length_mod < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	if (g->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr_Node = g->next->n % g->n;
	g->next->n = curr_Node;
	*head = g->next;
	free(g);
}
