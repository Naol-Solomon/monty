#include "monty.h"
/**
  *rotr- rotates the stack to the bottom
  *@top: stack head
  *@number: line_number
  *Return: no return
 */
void rotr(stack_t **top, __attribute__((unused)) unsigned int number)
{
	stack_t *copy;

	copy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}