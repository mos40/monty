#include "monty.h"
/**
 * f_add - add more top two elements of the stack
 * @head: stack head to the ptr
 * @counter: line_ Mumber
 * Return: no return val
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *d;
	int len = 0, current_node;

	d = *head;
	while (d)
	{
		d = d->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	d = *head;
	current_node = d->n + d->next->n;
	d->next->n = current_node;
	*head = d->next;
	free(d);
}
