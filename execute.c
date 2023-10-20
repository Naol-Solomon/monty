#include "monty.h"
/**
* execute - executes the opcode forwarded
* @top: head linked list - stack
* @number: line_counter
* @filestream: poiner to monty file
* @container: line content
* Return: nothing
*/
int execute(char *container, stack_t **top, unsigned int number, FILE *filestream)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub}, 
                {"mul", mul}, {"div_f", div_f}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(container, " \n\t");
	if (op && op[0] == '#')
		return (0);
	handle.input = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(top, number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", number, op);
		fclose(filestream);
		free(container);
		stack_free(*top);
		exit(EXIT_FAILURE); }
	return (1);
}