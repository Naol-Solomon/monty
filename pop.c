#include "monty.h"
void pop(stack_t **top, unsigned int number)
{
    if(!*top)
    {
        fprintf(stderr, "L%d: can't pop an empty stack", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
    else 
    {
        stack_t *temp = NULL;
        temp = *top;
        *top = temp->next;
        free(temp);
    }
    
}