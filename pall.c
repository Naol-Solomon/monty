#include "monty.h"

void pall(stack_t **top, unsigned int number)
{
    stack_t *stack = *top;
    (void)number;
    
    if (*top == NULL)
        return;

    while (stack!= NULL)
    {
        printf("%d\n", stack->n);
        stack = stack->next;
    }
}
