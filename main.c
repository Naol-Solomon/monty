#include "monty.h"
handle_t handle = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter for stack and queue
* @argc: number of arguments passed to the program
* @argv: monty file location in the program
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *container;
	FILE *filestream;
	size_t size = 0;
	ssize_t readline = 1;
	stack_t *top = NULL;
	unsigned int number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filestream = fopen(argv[1], "r");
	handle.filestream = filestream;
	if (!filestream)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readline > 0)
	{
		container = NULL;
		readline = getline(&container, &size, filestream);
		handle.container = container;
		number++;
		if (readline > 0)
		{
			execute(container, &top, number, filestream);
		}
		free(container);
	}
	stack_free(top);
	fclose(filestream);
return (0);
}