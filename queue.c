#include "monty.h"
/**
 * queue - prints the top
 * @top: stack head
 * @number: line_number
 * Return: nothing
*/
void queue(stack_t **top, unsigned int number)
{
	(void)top;
	(void)number;
	handle.desider = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **top, int number)
{
	stack_t *newnode, *temp;

	temp= *top;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = number;
	newnode->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*top = newnode;
		newnode->prev = NULL;
	}
	else
	{
		temp->next = newnode;
		newnode->prev = temp;
	}
}