#include "monty.h"
/**
 * f_pstr - prints the str begins at the top of the stack of pstr
 * followed by a new lineof pstr
 * @head: stack head to the ptr
 * @counter: line_numbeR ./
 * Return: no return vals
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *g;
	(void)counter;

	g = *head;
	while (g)
	{
		if (g->n > 127 || g->n <= 0)
		{
			break;
		}
		printf("%c", g->n);
		g = g->next;
	}
	printf("\n");
}
