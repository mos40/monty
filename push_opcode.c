#include "monty.h"
/**
 * f_push - Add more node to the stack
 * @head: Ptr to the stack head
 * @counter: line Number
 * Return: no return val.
*/
void f_push(stack_t **head, unsigned int counter)
{
	int m, g = 0, invalid_flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			g++;
		for (; bus.arg[g] != '\0'; g++)
		{
			if (bus.arg[g] > 57 || bus.arg[g] < 48)
				invalid_flag = 1; }
		if (invalid_flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	m = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, m);
	else
		addqueue(head, m);
}
