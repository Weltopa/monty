#include "monty.h"

/**
 * pall - Prints all values of the stack.
 * @shead: Stack head pointer.
 * @line: line number.
 * Return: Void.
 */
void pall(stack_t **shead, unsigned int line_number)
{
}

/**
 * pint - Prints value of stack head.
 * @shead: Stack head of dub list.
 * @line_number: Current line number.
 * Return: Void.
 */
{

	if (!shead)
	{
		dprintf(stderr, " L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*shead)->);
}
