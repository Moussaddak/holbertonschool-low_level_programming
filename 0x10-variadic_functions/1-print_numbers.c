#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - Print all passed number
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cp;

	if (separator != NULL)
	{
		va_list ap;

		va_start(ap, n);

		for (cp = 0; cp < (n - 1); cp++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}

		printf("%d\n", va_arg(ap, int));

		va_end(ap);
	}
}
