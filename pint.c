#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: the stack in program
 * @line_number: line being read in the program
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
