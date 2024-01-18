#include "monty.h"
/**
 * main - Entry point of the monty program
 * @argc: Number of arguments passed to the program
 * @argv: array of the arguments passed to the program
 * Return: Return 0 on successful execution, otherwise -1
 */
int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;

	(void) argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read_line(file, &stack);
	fclose(file);
	return (0);
}
