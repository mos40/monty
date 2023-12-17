#include "monty.h"
/**
 * f_div - divides/ the top twice elements of the stack.
 * @head: stack head to the ptr.
 * @counter: line_num
 * Return: no return val
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *g;
	int len = 0, curr_node;

	g = *head;
	while (g)
	{
		g = g->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	curr_node = g->next->n / g->n;
	g->next->n = curr_node;
	*head = g->next;
	free(g);
}
