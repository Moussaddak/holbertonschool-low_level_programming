#include <stdio.h>
/**
 *main - main function
 *@argc: input
 *@argv: input
 *Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", *(argv + argc - 1));
	return (0);
}
