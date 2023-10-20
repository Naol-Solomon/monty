#include "monty.h"
/**
 * pchar- integer as a character
 * @top: pointer to the top element
 * @number: number of integer as a character
 * Return: nothing
*/
void pchar(stack_t **top, unsigned int number)
{
    stack_t *temp = *top;
    if(!temp)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
    if (temp->n > 127 || temp->n < 0)
    {
        fprintf(stderr, "L%d: can't pchar", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", temp->n);
}