#include "monty.h"
/**
 * f_rotl- rotates/ round the rotl the stack to the top
 * @head: stack head to the ptr
 * @counter: line_numbeR./
 * Return: no return val
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp_roti = *head, *curr_aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	curr_aux = (*head)->next;
	curr_aux->prev = NULL;
	while (tmp_roti->next != NULL)
	{
		tmp_roti = tmp_roti->next;
	}
	tmp_roti->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp_roti;
	(*head) = curr_aux;
}
