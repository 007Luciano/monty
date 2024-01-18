#include "monty.h"
/**
 * push - Pushes an element on top to the stack
 * @stack: Pointer to the stack
 * @line_number: Line number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int opcode_int;
	char *opcode_str = strtok(NULL, " \t\n");
	int valid_num = is_int(opcode_str);

	if (opcode_str == NULL || !valid_num)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	opcode_int = atoi(opcode_str);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = opcode_int;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
