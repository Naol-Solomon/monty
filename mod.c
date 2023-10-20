#include "monty.h"
/**
 * mod - remainder of the  the tdivision of the top two elements of the stack.
 * @top: stack top element
 * @number: number inline
 * Return: nothing
*/
void mod(stack_t **top, unsigned int number)
{
	stack_t *temp;
	int count = 0, num;

	temp = *top;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
    if(temp->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		fclose(handle.filestream);
		free(handle.container);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	num = temp->next->n % temp->n;
	temp->next->n = num;
	*top = temp->next;
	free(temp);
}