#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @top: stack top element
 * @number: number inline
 * Return: nothing
*/
void add(stack_t **top, unsigned int number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		fclose(handle.filestream);
		free(handle.container);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	num = temp->n + temp->next->n;
	temp->next->n = num;
	*top = temp->next;
	free(temp);
}