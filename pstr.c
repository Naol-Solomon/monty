#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @top: stack head
 * @number: line_number
 * Return: nothing
*/
void pstr(stack_t **top, unsigned int number)
{
	stack_t *temp;
	(void) number;

	temp = *top;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c\n", temp->n);
		temp = temp->next;
	}
	printf("\n");
}