#include "monty.h"
/**
 * addnode - add a node to the top of the list of the stack
 * @top: pointer to the top of the stack
 * value: value to be added to the top of the stack
 * Return: Nothing
*/
void addnode(stack_t **top, unsigned int value)
{
    stack_t *newstack, *temp;

    newstack = malloc(sizeof(stack_t));
    if(!newstack) 
    {
        printf("Error\n");
        exit(0);
    }
    newstack->n = value;
    newstack->prev = NULL;
    newstack->next = NULL;
    if(*top == NULL)
    {
        *top = newstack;
    }
    else 
    {
        temp = *top;
        newstack->next = temp;
        newstack->prev = NULL;
        temp->prev = newstack;
        *top = newstack;
    }


}