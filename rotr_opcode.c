#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom of the rotr opcode
  *@head: stack head to the ptr
  *@counter: line_numbeR
  *Return: no return val
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy_rotr;

	copy_rotr = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy_rotr->next)
	{
		copy_rotr = copy_rotr->next;
	}
	copy_rotr->next = *head;
	copy_rotr->prev->next = NULL;
	copy_rotr->prev = NULL;
	(*head)->prev = copy_rotr;
	(*head) = copy_rotr;
}
