#include "monty.h"
/**
 * stack_free- to free allocated memory
 * @top: top node on the list
 * Return: Nothing
*/
void stack_free(stack_t *top)
{
    stack_t *temp = NULL;
    while (top) 
    {
        temp  = top->next;
        free(top);
        top = temp;
    }
}