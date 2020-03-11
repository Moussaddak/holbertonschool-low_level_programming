#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - selects the correct function to perform the operation
 *@s: input
 *Return: function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
