#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@top: stack head
  *@counter: line_number
  *Return: no return
 */
void rotl(stack_t **top,  __attribute__((unused)) unsigned int number)
{
	stack_t *tmp = *top, *temp2;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	temp2 = (*top)->next;
	temp2->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = temp2;
}