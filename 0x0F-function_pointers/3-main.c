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

	s = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (get_op_func(s) == NULL && *(*(av + 2) + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else if ((get_op_func(s) == op_div ||
		  get_op_func(s) == op_mod) && atoi(*(av + 3)) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		num1 = atoi(*(av + 1));
		num2 = atoi(*(av + 3));
		printf("%d\n", (get_op_func(s))(num1, num2));
	}

	return (0);

}
