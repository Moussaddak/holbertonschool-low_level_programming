#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - Print anything passed as arguments
 *@format: string to be printed between numbers
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, flag, k, args;
	char *str, *type;
	list lst[] = {
		{'c', "%c", "char"},
		{'i', "%i", "int"},
		{'f', "%f", "float"},
		{'s', "%s", "char*"}
	};
	va_list ap;

	while (*(format + i) != '\0')
	{
		i++;
	}
	args = i - 1;
	va_start(ap, args);
	while (*(format + j) != '\0')
	{
		//type = lst[j].ty;
		str = va_arg(ap, lst[j].ty);
		k = 0;
		flag = 1;
			while (k < 4 && flag)
			{
				if (format[j] == lst[k].c && format[j] != 's')
				{
					flag = 0;
					printf(lst[j].cr, str);
				}
				if (format[j] == lst[k].c && format[j] == 's' &&
				   str == NULL)
				{
					flag = 0;
					printf("(nil)");
				}
				k++;
			}
		j++;
	}
	va_end(ap);
	printf("\n");
}
