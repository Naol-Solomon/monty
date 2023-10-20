#include "monty.h"
/**
 * pint- print top most element of the stack
 * @top: pointer to the top element of the stack
 * @number: address at which error occurred
 * Return: Nothing
*/
void pint(stack_t **top, unsigned int number)
{
    if (*top == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
    else
        printf("%d\n", (*top)->n);
}