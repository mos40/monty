#include "monty.h"
/**
* addnode - Adds a node to the head of the stack
* @head: Head of the stack
* @n: New value to be added
* Return: No return value
*/
void addnode(stack_t **head, int n)
{

	stack_t *brand_new_node, *curr_node;

	curr_node = *head;
	brand_new_node = malloc(sizeof(stack_t));
	if (brand_new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (curr_node)
		curr_node->prev = brand_new_node;
	brand_new_node->n = n;
	brand_new_node->next = *head;
	brand_new_node->prev = NULL;
	*head = brand_new_node;
}
