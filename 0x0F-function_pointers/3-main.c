#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main - main function
 *@ac: input
 *@av: input
 *Return: always 0;
 */
int main(int ac, char **av)
{
	int num1, num2;
	char *s;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(*(av + 1));
	num2 = atoi(*(av + 3));
	s = av[2];
	if ((*get_op_func(s)) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*get_op_func(s)) == op_div ||
	     (*get_op_func(s)) == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return ((*get_op_func(s))(num1, num2));

}
