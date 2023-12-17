#include "monty.h"
/**
 * f_pchar - printsand show the char at the top of the stack to f_pchar
 * followed by a new line of pchar
 * @head: stack head to theparameter
 * @counter: line_number to the pchar curr
 * Return: no return vals
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *g;

	g = *head;
	if (!g)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (g->n > 127 || g->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", g->n);
}
