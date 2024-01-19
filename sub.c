#include "monty.h"
/**
 * sub - subtract the top element of the stack from the second top element
 * @stack: the stack of the program
 * @line_number: line number
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	stack_t *topp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	topp = top->next;

	topp->n -= top->n;
	pop(stack, line_number);
}
