#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void print_char(va_list p);
void print_int(va_list p);
void print_float(va_list p);
void print_string(va_list p);
/**
 *print_all - Print anything passed as arguments
 *@format: string to be printed between numbers
 */
void print_all(const char * const format, ...)
{
	unsigned int j = 0, flag, k;
	char *s = "";
	list lst[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_list ap;

	va_start(ap, format);
	while (format && *(format + j))
	{
		k = 0;
		flag = 1;
		while (k < 4 && flag)
		{
			if (format[j] == lst[k].c)
			{
				printf("%s", s);
				flag = 0;
				lst[k].f(ap);
				s = ", ";
			}
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
/**
 *print_char - display a character
 *@p: argument
 */
void print_char(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
 *print_int - display a integer
 *@p: argument
 */
void print_int(va_list p)
{
	printf("%d", va_arg(p, int));
}
/**
 *print_float - display a float
 *@p: argument
 */
void print_float(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 *print_string - display a string
 *@p: argument
 */
void print_string(va_list p)
{
	char *s;

	s = va_arg(p, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
