#include "monty.h"
/**
 * f_queue - prints and display the top og the added
 * @head: stack head to the ptr
 * @counter: line_numbeR..,
 * Return: no return val
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add more node to the tail stack of queue
 * @n: new_value to the ptr
 * @head: head of the stack to add queue
 * Return: no return val
*/
void addqueue(stack_t **head, int n)
{
	stack_t *brand_new_node, *curr_node;

	curr_node = *head;
	brand_new_node = malloc(sizeof(stack_t));
	if (brand_new_node == NULL)
	{
		printf("Error\n");
	}
	brand_new_node->n = n;
	brand_new_node->next = NULL;
	if (curr_node)
	{
		while (curr_node->next)
			curr_node = curr_node->next;
	}
	if (!curr_node)
	{
		*head = brand_new_node;
		brand_new_node->prev = NULL;
	}
	else
	{
		curr_node->next = brand_new_node;
		brand_new_node->prev = curr_node;
	}
}
