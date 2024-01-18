#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: the stack in the program
 * @line_number: line being read when add encountered
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int adds;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	adds = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = adds;
}
