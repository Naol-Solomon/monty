#include "monty.h"
/**
 * push- function to add or push data to stack
 * @top: pointer to element at the top of stack
 * number: place where error occurred
 * Return: Nothing
*/
void push(stack_t **top, unsigned int number)
{
    int n, j = 0, flag = 0;
    if (handle.input)
    {
        
            j++;
        for (;handle.input[j] != '\0'; j++)
        {
            if (handle.input[j] > 57 || handle.input[j] < 48)
                flag = 1;
        }
        if (flag == 1)
        {
            fprintf(stderr,"L%d: usage: push integer\n", number);
            fclose(handle.filestream);
            free(handle.container);
            stack_free(*top);
            exit(EXIT_FAILURE);
        }
    }
    else 
    {
        fprintf(stderr, "L%d: usage: push integer", number);
        fclose(handle.filestream);
        free(handle.container);
        stack_free(*top);
        exit(EXIT_FAILURE);
    }
    n = atoi(handle.input);

    if (handle.desider == 0)
    {
        addnode(top, n);
    }
    /* else
        addqueue(top, n);*/
}