#include "monty.h"
/**
 * _div - divides the second top element of the stack by the top element
 * @stack: the stack in the program
 * @line_number: line being read when div encountered
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *divis;
	stack_t *divdnd;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	divis = *stack;
	divdnd = divis->next;

	if (divdnd->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	divdnd->next->n = divdnd->n / divis->n;
	pop(stack, line_number);
}
