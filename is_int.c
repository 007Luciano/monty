#include "monty.h"
/**
 * is_int - Verifies if number is an interger
 * @str: the string interger
 * Return: Returns 0 if the string contains non int values otherwise return 1
 */
int is_int(char str[])
{
	size_t i;

	if (str == NULL)
		return (0);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[0] == '-')
			continue;

		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
