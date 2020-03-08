#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 *main - main function
 *@argc: input
 *@argv: input
 *Return: always 0
 */
int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
