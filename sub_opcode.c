#include "monty.h"
/**
  *f_sub- sustration/minus
  *@head: stack head to ptr
  *@counter: line_nuM
  *Return: no return or EXIT_FAILURE
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *current_Node;
	int sus, nodes;

	current_Node = *head;
	for (nodes = 0; current_Node != NULL; nodes++)
		current_Node = current_Node->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current_Node = *head;
	sus = current_Node->next->n - current_Node->n;
	current_Node->next->n = sus;
	*head = current_Node->next;
	free(current_Node);
}
