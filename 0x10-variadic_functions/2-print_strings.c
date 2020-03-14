#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - Print all passed stings
 *@separator: string to be printed between numbers
 *@n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cp;
	char *s;

	if (n != 0)
	{
		va_list ap;

		va_start(ap, n);

		for (cp = 0; cp < (n - 1); cp++)
		{
			s = va_arg(ap, char*);

			if (separator != NULL && s != NULL)
				printf("%s%s", s, separator);

			else if (separator == NULL && s != NULL)
				printf("%s", s);

			else if (separator != NULL && s == NULL)
				printf("(nil)%s", separator);

			else if (separator == NULL && s == NULL)
				printf("(nil)");
		}

		s = va_arg(ap, char*);

		if (s != NULL)
			printf("%s", s);

		else if (s == NULL)
			printf("(nil)");

		va_end(ap);
	}
	printf("\n");
}
