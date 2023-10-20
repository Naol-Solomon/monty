#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @top: stack head
 * @number: line_number
 * Return: nothing
*/
void swap(stack_t **top, unsigned int number)
{
	stack_t *temp;
	int count = 0, num;

	temp = *top;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(handle.filestream);
		free(handle.container);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	num = temp->n;
	temp->n = temp->next->n;
	temp->next->n = num;
}