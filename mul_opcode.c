#include "monty.h"
/**
 * f_mul - replicates the top two elements of the stacK
 * @head: stack head to The ptr
 * @counter: line_numb.
 * Return: no return mul
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *g;
	int len_mul = 0, curr_node;

	g = *head;
	while (g)
	{
		g = g->next;
		len_mul++;
	}
	if (len_mul < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	curr_node = g->next->n * g->n;
	g->next->n = curr_node;
	*head = g->next;
	free(g);
}
