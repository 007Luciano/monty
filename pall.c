#include "monty.h"
/**
 * pall - Prints all the values on the stack in the program
 * @stack: Pointer to the top of the stack
 * @line_number: Line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current != NULL)
	{
		stack_t *temp = current;

		printf("%d\n", current->n);
		current = current->next;
		free(temp);
	}
	*stack = NULL;
}
